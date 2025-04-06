//1.create a system for school where the student has the correct attributes
//2.create a system for how much a student owes and total of what students owe, how many students owe money, and average of it.
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

class student{
	private:
		int _ID, _grade;
		string _name;
		double _GPA, _balance;
	public:
		student(string, int, int, double, double);
		friend ostream & operator << (ostream &, student &);
		string showStudent() const;
		string showStudentSimple() const;
		int getID() const;
		int getGrade() const;
		string getName() const;
		double getGPA() const;
		double getBalance() const;
};
student::student(string name, int grade, int ID, double GPA, double balance) : _name(name), _grade(grade), _ID(ID), _GPA(GPA), _balance(balance) {}

//getters
int student::getID() const{
	return _ID;
}
int student::getGrade() const{
	return _grade;
}
string student::getName() const{
	return _name;
}
double student::getGPA() const{
	return _GPA;
}
double student::getBalance() const{
	return _balance;
}

string student::showStudent() const{
	return _name + " with the student ID " + to_string(_ID) + " is in the " + to_string(_grade) + " grade with a " + to_string(_GPA) + " GPA and currently owes " + to_string(_balance) + " dollars.\n";
}
string student::showStudentSimple() const{
	return _name + ":\n\tID: " + to_string(_ID) + "\n\tGrade: " + to_string(_grade) + "\n\tGPA: " + to_string(_GPA) + "\n\tBalance: $" + to_string(_balance) + "\n";
}

ostream & operator << (ostream &o, student &s){
	return o << s.getName() << ": " << s.getID();
}

int main(){
	vector<student> v;
	int ID, grade;
	string name;
	double GPA, balance;
	int choice = 1;
	cout << fixed << setprecision(2);
	while (choice != 0){
		cout << "1)See List of Students\n2)See Specific Student\n3)Add a Student\n4)See Balance of Student\n5)See Total Owed, How Many Owing and Average Owed\n0)Exit\n";
		cin >> choice;
		if (choice == 1){
			if(v.size() == 0){
				cout << "There are no students currently, add some!\n\n";
			}
			else{
				for(auto i:v){
					cout << i.showStudentSimple() << "\n";
				}
			}
		}
		else if (choice == 2){
			if(v.size() == 0){
				cout << "There are no students currently, add some!\n\n";
			}
			else{
				cout << "Which Student?\n";
				for(int i=1; i<=v.size(); i++){
					cout << i << ". " << v.at(i-1) << "\n";
				}
				int studentChoice;
				cin >> studentChoice;
				cout << v.at(studentChoice-1).showStudent() << "\n";
			}
			
		}
		else if (choice == 3){
			cout << "Name? ";
			cin >> name;
			cout << "Grade? ";
			cin >> grade;
			cout << "Student ID? ";
			cin >> ID;
			cout << "GPA? ";
			cin >> GPA;
			cout << "Balance? ";
			cin >> balance;
			v.push_back(student(name, grade, ID, GPA, balance));
			cout << "\n";
		}
		else if (choice == 4){
			if(v.size() == 0){
				cout << "There are no students currently, add some!\n\n";
			}
			else{
				cout << "Which Student?\n";
				for(int i=1; i<=v.size(); i++){
					cout << i << ". " << v.at(i-1) << "\n";
				}
				int studentChoice;
				cin >> studentChoice;
				if(v.at(studentChoice-1).getBalance() == 0){
					cout << "This Student doesn't owe any money\n\n";
				}
				else{
					cout << v.at(studentChoice-1).getName() << " owes $" << v.at(studentChoice-1).getBalance() << "\n\n";
				}
			}
		}
		else if (choice == 5){
			if(v.size() == 0){
				cout << "There are no students currently, add some!\n\n";
			}
			else{
				double tOwed = 0;
				int nOwing = 0;
				for(int i=0; i<v.size(); i++){
					tOwed += v[i].getBalance();
					if (v[i].getBalance() != 0){
						nOwing += 1;
					}
				}
				cout << "Total Owed: $" << tOwed << "\n";
				cout << "Average Owed: $" << tOwed/v.size() << "\n";
				cout << "Number of Students Owing: " << nOwing << "\n\n";

			}
		}
	}
}
