#include <iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);
	string a;
	int b=0;
	int c=0;
	cin >> a;
	for(int i=1; i<a.size(); i++){
		if (a[i]==a[i-1]){
			b+=1;
		}
		else{
			if (b>c) c=b;
			b=0;
		}
	}
	if (b>c) c=b;
	cout << c+1 << "\n";
}
