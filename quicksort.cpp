#include <bits/stdc++.h>
using namespace std;
void quicksort(vector<int>& v, int b, int ac){
	if (b<ac){
		int ax = b;	
		for(int i=b; i<ac;i++){
			if (v[i]<v[ac]){
				swap(v[i],v[ax]);
				ax++;
			}
		}
		swap(v[ax],v[ac]);
		quicksort(v, b, ax-1);
		quicksort(v, ax+1, ac);
	}
}
int main(){
	int a,n;
	int b = 0;
	cout << "how many numbers?\n";
	cin >> n;
	vector<int> v(n);
	int ac = n-1;
	cout << "Input numbers: ";
	for(int i=0; i<n; i++) cin >> v[i];
	cout << "starting sorting \n";
	quicksort(v,b,ac);
	for(int i=0; i<n; i++) cout << v[i] << "\n";
}
