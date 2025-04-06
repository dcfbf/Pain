#include <iostream>
#include <map>
using namespace std;

class node {
	public:
		int _value;
		node * _next;
		node(int);
};

node::node(int value) : _value(value), _next(nullptr) {}

class list {
	public:
		node * _head;
		node * _tail;
		int _size;
		list();
		void print() const;
		void pushBack(int);
		void addFront(int);
		void popFront();
		void addBefore(int,int);
		void deleteAll();
		int accessFront();
		int accessBack();
		void selectionSort();
		node * getMax();
		void removeDuplicates();
};

list::list() : _head(nullptr), _tail(nullptr), _size(0) {}

void list::print() const{
	//check to see if list is empty
	if (!_head){ 
		cout << "Nothing here to print out\n";
		return;
	}

	node * current = _head;
	while (current->_next){
		cout << current->_value << "\n";
		current = current->_next;
	}
	cout << current->_value << "\n";
}
void list::pushBack(int value) {
	node * prevtail = _tail;
	node * tail = new node (value);
	_tail = tail;
	if (prevtail != nullptr)  prevtail->_next = _tail;
	if (_head == nullptr) _head = _tail;
	_size += 1;
//	cout << _head->_value << "\n" << _tail->_value << "\n\n";
}

void list::addFront(int value){
	node * prevhead = _head;
	node * head = new node (value);
	_head = head;
	if (prevhead != nullptr) _head->_next = prevhead;
	if (_tail == nullptr) _tail = _head;
	_size += 1;
}

void list::popFront(){
	if (!_head){
		cout << "There's nothing here to delete\n";
		return;
	}
	if (_head != _tail){
		node * nhead = _head->_next;
		delete _head;
		_head = nhead;
	}
	else{
		delete _head;
		_head = _tail = nullptr;
	}
	_size -= 1;
}

void list::addBefore(int value, int beforeValue){
	/*
	while (current->_next->_value != beforeValue && current->_next != nullptr){
		current = current->_next;
	}*/

	//mistake checking
	if (!_head){
		addFront(value);
		cout << "Since I am so nice, I added it in for you even though there was \nnothing in the list and you did something dumb\n";
		return;
	}
	if (beforeValue == _head->_value){
		addFront(value);
		cout << "Use addFront(value) next time\n";
		return;
	}

	node * addBefore = new node (value);
	node * before = nullptr;
	node * current = _head;

	while (current->_next != nullptr){
		if (current->_next->_value == beforeValue) break;
		current = current->_next;
	}	
	if (current->_next != nullptr){
		before = current->_next;
		addBefore->_next = current->_next;
		current->_next = addBefore;
		_size += 1;
	}
	else {
		cout << "What do you expect me to do? Add it in front of nothing? \nuse your brain next time you dumb\n";
		return;
	}
}

void list::deleteAll(){
	if (!_head) {
		cout << "Delete all of what?\n";
		return;
	}
	while (_head) popFront();
}

int list::accessFront(){
	return _head->_value;
}

int list::accessBack(){
	return _tail->_value;
}

void list::selectionSort(){
//	cout << "Starting sorting\n";
	node * prev = _head;
	node * lastSorted;
	node * min = prev;
	node * prevmin = nullptr;
	while (prev!=_tail){
//		cout << "I'm starting the first one\n";
		if (prev->_next->_value < min->_value){
			min = prev->_next;
			prevmin = prev;
//			cout << "I'm in the first one\n";
		}
		prev = prev->_next;
	}
//	cout << "I cleared the first one \n";
//	cout << prevmin->_value;
//	cout << min ->_value;
	if (prevmin != nullptr){
		if (min->_next != nullptr) prevmin->_next = min->_next;
		else {
			_tail = prevmin;
			_tail->_next = nullptr;
		}
		min->_next = _head;
		_head = min;
	}
//	cout << "here\n";
	lastSorted = _head;
	prev = lastSorted;
	min = prev->_next;
//	cout << lastSorted->_value;
	for (int i=1; i<_size-1; i++){
		while (prev->_next){
			if (prev->_next->_value < min->_value){
				min = prev->_next;
				prevmin = prev;
			}
			prev = prev->_next;
		}
//		cout << "I'm in the second one\n";
		if (min->_next != nullptr) prevmin->_next = min->_next;
		else {
			_tail = prevmin;
			_tail->_next = nullptr;
		}
		min->_next = lastSorted->_next;
		lastSorted->_next = min;
		lastSorted = min;
		prev = lastSorted;
		min = prev->_next;
//		cout << lastSorted->_value;
	}
	lastSorted->_next = _tail;
//	cout << "I cleared the second one\n";
}

node * list::getMax(){
	node * max = _head;
	node * current = _head->_next;
	while(current->_next){
		if (current->_value > max->_value){
			max = current;
		}
		current = current->_next;
	}
	return max;
}

void list::removeDuplicates(){
	if (!_head){
		cout << "No duplicates to remove if there is nothing here\n";
		return;
	}
	map <int, int> hashing;
	node * current = _head;
	hashing[current->_value] = 1;
	while(current->_next){
//		cout << "hi\n";
		if (hashing.find(current->_next->_value) == hashing.end()){
			hashing[current->_next->_value] = 1;
			
			if(current->_next) current = current->_next;
		}
		else{
//			cout << "found one! \n";
			if (current->_next->_next){
				node * deletednext = current->_next->_next;
				delete current->_next;
				current->_next = deletednext;
//				cout << current->_next->_value << "\n\n";
			}
			else{
				delete current->_next;
				current->_next = nullptr;
				_tail = current;
			}
//			print();

		}
//		cout << "bye\n";
//		if(current->_next) current = current->_next;
	}
	/*
	const int max = getMax()->_value + 1;
	int hashing[max];
	for(int i = 0; i<max; i++) hashing[i] = 0;
	for(int i = 0; i<max; i++) cout << hashing[i];
	node * current = _head;
	hashing[current->_value] += 1;
	while(current->_next){
		cout << "hi\n";
		if (hashing[current->_next->_value] == 0){
			hashing[current->_next->_value]+=1;
		}
		else{
			cout << "found one! \n";
			if (current->_next->_next){
				node * deletednext = current->_next->_next;
				delete current->_next;
				current->_next = deletednext;
			}
			else{
				delete current->_next;
				current->_next = nullptr;
				_tail = current;
			}
			print();

		}
		cout << "bye\n";
		if(current->_next) current = current->_next;
	}
	*/
}

int main(){
	list l;
	l.print();
	l.deleteAll();
	l.addBefore(12,12);
	l.pushBack(5);
	l.addFront(3);
	l.addBefore(9, 3);
	l.addBefore(24, 5);
	l.addBefore(11, 6);
	l.pushBack(235);
	l.addFront(77);
	l.pushBack(2);
	l.pushBack(-1);
	l.addBefore(-3, 5);
	l.addFront(-111);
	l.addFront(5);
	l.addFront(5);
	l.addFront(5);
	l.pushBack(5);
//	l.addFront(-1);
//	l.addFront(-1);
	l.print();
	cout << "\n\n";
	cout << l.getMax()->_value << "\n";
	cout << l.accessFront() << "\n";
	cout << l.accessBack() << "\n";
	l.removeDuplicates();
	cout << "\n\n";
	l.print();
	/*
	l.selectionSort();
	cout << l.accessFront() << "\n";
	cout << l.accessBack() << "\n";
	l.print();
	cout << l._size << "\n";
	l.deleteAll();
	cout << l._size << "\n";
	l.pushBack(7);
	l.print();
	l.popFront();
	l.addFront(10);
	l.print();
*/
	/*
	node * head = a;
	node * tail = a;
	node * b = pushBack(3, tail);
	node * c = addFront(5, head);
	printLinkedList(head);
	node * current = a;
	while (current->_next != nullptr){
		cout << current->_value << "\n";
		current = current->_next;
	}
	cout << current->_value << "\n";
	delete a;
	delete b;
	*/

}
