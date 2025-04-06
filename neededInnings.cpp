#include <iostream>
using namespace std;
int main(){
	int A;
	int total = 0;
	for (int i=0; i<9;i++){
		cin >> A;
		total += A;
	}
	for (int j=0; j<8;j++){
		cin >> A;
		total -= A;
	}
	cout << total+1 << "\n";
}
