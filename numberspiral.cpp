#include <iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n,ax;
	long a,b,g,ac;
	cin >> n;
	for(int i=0; i<n;i++){
		cin >> a >> b;
		if(a > b) {
			ac = a;
			ax = 1;
			g = ac*ac-ac+1;
		}
		else if (a < b){
			ac = b;
			ax = 0;
			g = ac*ac-ac+1;
		}
		else {
			g = b*b-b+1;
			ax = 2;
		}
		if (ac%2 == 0 && ax < 2){
			g=g-b+a;
		}
		else if (ac%2 == 1 && ax < 2){
			g=g+b-a;
		}
		cout << g << "\n";
	}
}
