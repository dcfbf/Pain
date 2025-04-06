#include <iostream>
using namespace std;
int main(){
	int a[5] = {4,3,5,2,1};
	int posmin;
	for (int i = 0; i < 5; i++){
		posmin = i;
		for (int j = i; j < 5; j++){
			if (a[j]<a[posmin]) {
				posmin = j;
			}
		}
		swap(a[posmin],a[i]);
	}
	for (int i:a) cout << i << "\n";
}
