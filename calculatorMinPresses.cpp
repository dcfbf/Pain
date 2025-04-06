#include <iostream>
using namespace std;
int main(){
	string S;
	cin >> S;
	int len = S.size();
	char prev = S[0];
	for (int i = 1; i<S.size(); i++){
		if (S[i] == prev and S[i] == '0') {
			len--;
			i++;
		}
		prev = S[i];
	}
	cout << len << "\n";
}
