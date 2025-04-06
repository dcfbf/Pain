//do 3 variables a, pointer of a, and pointer of pointer of a and print out all their values
#include <bits/stdc++.h>
using namespace std;
int main(){
	int a = 20;
	int *p = &a;
	int **pp = &p;
	cout << a << " " << p << " " << pp << "\n";
	cout << &a << " " << &p << " " << &pp << "\n";
	cout << *p << " " << *pp << "\n";
}
