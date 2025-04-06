#include <iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
	double n;
	long a;
	int b;
	cin >> n;
	a=(n+1)*(n/2);
	for(int i=1;i<n;i++){
		cin >> b;
		a-=b;
	}
	cout << a << "\n";
}
