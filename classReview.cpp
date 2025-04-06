#include <bits/stdc++.h>
using namespace std;

class Apples {
	private:	
		int _size;
		string _color, _taste;
	public:
		Apples(int size, string color, string taste);
		int getSize() const;
		string getColor() const;
		string getTaste() const;
};

class SourApples : public Apples {

b}

Apples::Apples(int size, string color, string taste) : _size(size), _color(color), _taste(taste) {}

int Apples::getSize() const{
	return _size;
}

string Apples::getColor() const{
	return _color;
}

string Apples::getTaste() const{
	return _taste;
}

int main(){
	Apples obj (3, "red", "sour");
	cout << obj.getSize() << "\n";
	cout << obj.getColor() << "\n";
	cout << obj.getTaste() << "\n";
}
