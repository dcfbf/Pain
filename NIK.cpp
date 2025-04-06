//#include <bits/stdc++.h> //Or use 
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int a[5] = {1,50,25,15,20};
	for (int i = 0; i< 5; i++) cout << *(a+i) << "\n";
	cout << "\n";
	sort (a,a+5);
	for (int i = 0; i< 5; i++) cout << *(a+i) << "\n";
	cout << "\n";
	sort (a,a+5, greater<int>());
	for (int i = 0; i< 5; i++) cout << *(a+i) << "\n";
}
