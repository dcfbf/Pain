#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

class laptop{
	private:
		int _screenSize, _year;
		string _model, _manufacturer;
	public:
		laptop(int year=2018, string manufacturer="empty", string model="empty", int screenSize=3479384);
		string showLaptop();
		~laptop();
		friend ostream & operator << (ostream &, laptop &);
		string getManu();
		string getModel();
		int getScreenSize();
		void setScreenSize(int);
		void setYear(int);
		void setModel(string);
		void setManufacturer(string);
};

laptop::laptop(int year, string manufacturer, string model, int screenSize) : _year(year), _manufacturer(manufacturer), _model(model), _screenSize(screenSize) {
	//if (_model != "dcfbflkajflaihgoiahpjgoihsoigsioghohoig"){
	//cout << "you have created a laptop with: " << showLaptop() << "\n";
	//}
}

string laptop::showLaptop() {
	return to_string(_year) +  " " + _manufacturer + " " + _model + " with " + to_string(_screenSize) + "in screen \n";
}

//getters
string laptop::getManu(){
	return _manufacturer;
}
string laptop::getModel(){
	return _model;
}
int laptop::getScreenSize(){
       	return _screenSize;
}
//setters
void laptop::setScreenSize(int ss){
	_screenSize = ss;
}
void laptop::setYear(int y){
	_year = y;
}
void laptop::setModel(string m){
	_model = m;
}
void laptop::setManufacturer(string manu){
	_manufacturer = manu;
}

ostream & operator << (ostream &o, laptop &k){
	return o << k.getManu() << " " <<  k.getModel();
}
laptop::~laptop(){
//	cout <<"Not the landfill!!!!! \n";
}
int main(){
	vector<laptop> v(5);
	vector<string> k;
	string manufacturer, model;
	int screenSize, year;
	int choice = 1;
	char yesno;
	int slot;
	//int limit = 0;
	while(choice != 0){
		cout << "What do you want to do? \n(1). Create a laptop\n(2). Destroy a laptop\n(0). Exit\n";	
		cin >> choice;
		if (choice == 1){
			cout << "Which slot would you like to use?\n";
			for (int i=0; i<5;i++) cout << i+1 << ". " << v.at(i) << "\n";
			cin >> slot;
			slot -= 1;
			if (v.at(slot).getScreenSize() != 3479384){
				cout << "There is already a laptop at that slot. \nIf you create a new laptop there, that laptop will be destroyed. \nARE YOU SURE? (y/n)";
				cin >> yesno;
			}
			else{
				cout << "Who made what in what year and in what size? \n";
				cin >> manufacturer >> model >> year >> screenSize;
				v.at(slot).setScreenSize(screenSize);
				v.at(slot).setYear(year);
				v.at(slot).setModel(model);
				v.at(slot).setManufacturer(manufacturer);
				cout << "you have created a laptop with: " << v.at(slot).showLaptop() << "\n";
				//limit += 1;
			}
			if (yesno == 'y'){
				cout << "Who made what in what year and in what size? \n";
				cin >> manufacturer >> model >> year >> screenSize;
				v.at(slot).setScreenSize(screenSize);
				v.at(slot).setYear(year);
				v.at(slot).setModel(model);
				v.at(slot).setManufacturer(manufacturer);
				cout << "you have created a laptop with: " << v.at(slot).showLaptop() << "\n";
			}
		}
		else if (choice == 2){
			cout << "Which laptop would you wnat to destroy?\n";		
			for (int i=0; i<5;i++) cout << i+1 << ". " << v.at(i) << "\n";
			cin >> slot;
			slot -= 1;
			v.at(slot) = (laptop());
			cout <<"Not the landfill!!!!! \n";
		}
		/*	
		string *p;
		p=&model;
		ostringstream oss;
		oss << static_cast<void*>(p);
		k.push_back(oss.str());
		*/
		//if (limit == 5){
		//	break;
		//}
	}
	cout << "Here is a list of all the laptops you have created: \n";
	for (int i=0; i<5;i++){
		cout << i+1 << ". " << v.at(i) << "\n";
		//cout << k.at(0) << "\n";
dcfbf@dcfbf-X1C6-mint:~$ 
	}
}
