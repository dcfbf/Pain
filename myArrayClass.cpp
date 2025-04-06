#include <iostream>
using namespace std;

class Bucket {
	public:
		int _capacity;
		int * _data;
		int _size = 0;
		Bucket(int);
		int getCapacity() const;
		void pushBack(int);
		int getSize() const;
		void print() const;
		void sort();
};

Bucket::Bucket(int capacity) : _capacity(capacity) {
	_data = new int(_capacity);
};

int Bucket::getCapacity() const {
	return _capacity;
}

void Bucket::pushBack(int value){
	_data[_size] = value;
	_size += 1;
}

int Bucket::getSize() const {
	return _size;
}

void Bucket::print() const {
	for (int i=0; i<_size; i++){
		cout << _data[i] << "\n";
	}
}

void Bucket::sort() {
	int yes = 0;
	for (int i=0; i<_size; i++){
		int min = _data[i];
		for (int j=i+1; j<_size; j++){
			if (_data[j] < min) {
				min = j;
				yes = 1;
				break;
			}
		}
		if (yes == 1) swap(_data[i], _data[min]);
		yes = 0;
	}
}

int main(){
	Bucket b(10);
	cout << b.getCapacity() << "\n";
	b.pushBack(5);
	cout << b._data[0] << "\n";
	cout << b.getSize() << "\n";
	b.pushBack(1345);
	b.pushBack(23095);
	b.pushBack(-111);
	b.print();
	b.sort();
	b.print();
}
