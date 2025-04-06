#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, a, b;
	int c = 0;
	string yn = "No\n";
	cin >> N;
	cin >> a;
	for (int i=1; i<N; i++) {
		cin >> b;
		if (a == b) c++;
		else c = 0;
		if (c == 2) {
			yn =  "Yes\n";
			break;	
		}
		a = b;
	}
	cout << yn;
}
