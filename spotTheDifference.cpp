#include <iostream>
#include <vector>
using namespace std;
/*
int main(){
	int N;
	cin >> N;
	char A[N][N];
	char input;
	for (int i=0;i<N;i++){
		for (int j=0;j<N;j++){
			cin >> A[i][j];
		}
	}
	for (int h=0;h<N;h++){
		for(int k=0;k<N;k++){
			cin >> input;
			if (input != A[h][k]){
				cout << h+1 << " " << k+1 << "\n";
				return 1;
			}
		}
	}
}
*/
int main(){
	int N;
	cin >> N;
	char A[N*N];
	char input;
	for (int i=0;i<N*N;i++){
		cin >> A[i];
	}
	for (int j=0;j<N*N;j++){
		cin >> input;
		if (input != A[j]){
			cout << j/N+1 << " " << ((((double) j)/N)-j/N)+1<< "\n";
		}	
	}
}
