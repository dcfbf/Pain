#include <iostream>
using namespace std;

int main(){
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	int a[14] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	a[A] += 1;
	a[B] += 1;
	a[C] += 1;
	a[D] += 1;
	int two = 0;
	for (int i:a){
		if (i == 2) two += 1;
		if (i == 3) {
			cout << "Yes \n";
			return 0;
		}
	}
	if (two == 2) cout << "Yes \n";
	else cout << "No \n";
}
