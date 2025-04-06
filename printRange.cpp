#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	int m;
	int k;
	cin >> n;
	int a[n];
	for (int i = 0; i<n; i++) cin >> a[i];
	cin >> m >> k;
	for (int i = m-1; i<k; i++) cout << a[i] << "\n";
}
