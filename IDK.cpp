//#include <bits/stdc++.h> //Or use 
#include <iostream>
using namespace std;
/*
int main() {
	string hi = "Hi";
	string bye = "Bye";
	for (auto i: bye) cout<<i<<"\n";
}
*/
int main() {
	int a[5] = {1,2,3,4,5};
	int b = 0;
	int c[5];
	for (auto i = 0; i<5; i++){ 
		b += a[i];
		c[i] = b;
		cout << c[i] << "\n";
	}
}
