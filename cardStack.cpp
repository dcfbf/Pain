#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, a;
	cin >> N;
	vector <int> v;
	for (int i=0; i<N; i++){
		cin >> a;
		if (a == 1){
			cin >> a;
			v.push_back(a);
		}
		else {
			if (v.size() > 0) {
				cout << v.at(v.size()-1) << "\n";
				v.pop_back();
			}
			else cout << 0 << "\n";
		}
	}
}
