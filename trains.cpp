#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int N;
	int X;
	int Y;
	int K;
	cin >> N >> X >> Y >> K;
	if (K != min({X,Y,K}) && K!= max({X,Y,K})) cout << "Yes\n";	
	else cout << "No\n";
//compare k with x 
//if k is greater than x then check if it is less than y
//if k is less than y and greater than x output yes
//if k is less than x then check if it is greater than y
//if it is, then output yes if no for all of them, output no

//Short ver
// if k is between x and y then yes
// otherwise it is no
}
