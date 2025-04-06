#include <iostream>

using namespace std;

class Person{
    protected:
        string _name;
    public:
        Person(string);
        void virtual info() const;
};

Person::Person(string name) : _name(name) {}

void Person::info( ) const{
    cout << "Name: " << _name << "\n";
}

class Student : public Person{
    public:
        Student(string);
        void virtual info() const; //redefine compiler time
        // void info(); // overriding = virtual = dynamic binding
        // you need reference and pointer to trigger the poly morphism
};

Student::Student(string name) : Person(name) {}


void Student::info( ) const{
    cout << "Student name: " << _name << "\n";
}


//step 2 and step 3
void foo(const Person &p){
    p.info();
}

int main(){
    Person po("Jeff");
    Student so("Luke");
    po.info(); //step 1
    so.info(); //step 1
    foo(po); //step 2
    foo(so); // step 2
    //step 3 use pointer and call foo function.
    Person * pso = &so;
    pso->info();
    //step 4
    Person * p[] = { new Person("J"), new Student("L") };
    for(auto *obj : p) obj->info();
    for(auto *obj : p) delete obj;
}
