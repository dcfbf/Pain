#include <bits/stdc++.h>
#include <chrono>
using namespace std;

/*
//1
int main() {
  int x;
  cin >> x;
  for (int i = 0; i<x; i++){
    for (int j = 0; j<x; j++){
      if(i == j){
        cout << 0 << " ";
      }
      else{
        cout << 1 << " ";
      }
    }
    cout << "\n";
  }
}
*/
//2
/*
int main(){
  int n, d;
  cin >> n >> d;
  if(d>n) d %= n;
  int a[n];
  int counter = 0;
  for (int i = 0; i<n; i++){
    int t;
    cin >> t;
    if(counter<d) a[n-d+i] = t;
    else a[i-d] = t;
    counter ++;
  }
  for(auto i:a) cout << i << " ";
}
*/
/*

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for(int i=0; i<n; ++i) cin >> v[i];

    while(d != 0){
        int f = v.front();
        for(int j=1; j<n; ++j){
            v[j-1] = v[j];
        }
        v.back() = f;
        d--;
    }
    for(auto &x:v) cout << x << " ";
    cout << "\n";
}
*/
//3
/*
int main(){
  int n, a, b, c;
  cin >> n;
  int arr[n+2];
  memset(arr, 0, (n+2)*4);
  for(int i = 0; i<n; i++){
    cin >> a >> b >> c;
    arr[a] += c;
    arr[b+1] -= c;
  }
  int big = arr[0];
  for(int i=1;i<n+2;i++){
    arr[i] += arr[i-1];
    if(arr[i]>big) big = arr[i];
  };
  cout << big << "\n";
}
*/
/*
//4
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  cin >> n;
  int arr[n+1];
  int arr2[2*n-2];
  for(int i=1;i<=n;i++) cin >> arr[i];
  int a = 1;
  int e = 0;
  while(a<=n){
    if(arr[a]!=a){
      int b = arr[a];
      int temp = arr[b];
      arr2[e] = b;
      arr2[e+1] = temp;
      e += 2;
      arr[b]=b;
      arr[a]=temp;
    }
    else a++;
  }
  cout << e/2 << "\n";
  for(int i = 0; i<e; i++) {
    if(i%2==1) cout << arr2[i] << "\n";
    else cout << arr2[i] << " ";
  }
}
*/
// test
/*
int main(){
  int n = 300000000;
  int a[n];
  vector <int> v;
  chrono::time_point <chrono::system_clock> start, end;
  start  = chrono::system_clock::now();
  for(int i=0;i<n;i++) a[i] = i;
  end = chrono::system_clock::now();
  cout << "Array time \t\t" << chrono::duration_cast<chrono::nanoseconds> (end-start).count() << " ns\n";
  start  = chrono::system_clock::now();
  for(int i=0;i<n;i++) v.push_back(i);
  end = chrono::system_clock::now();
  cout << "Vector time \t" << chrono::duration_cast<chrono::nanoseconds> (end-start).count() << " ns\n";
  cout << "Vector time \t" << chrono::duration_cast<chrono::milliseconds> (end-start).count() << " ms\n";
  
}
*/
/*
//test2
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];
  for(int i=0;i<n;i++) cout << arr[i] << " ";
  cout << "\n";
}
*/

//5
/*
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  char a,b;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a >> b;
    cout << a-48 + b-48 << "\n";
  }
}
*/

//6

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n = 77;
  int a[n+1];
  for(int i = 1; i<=n; i++) {
    a[i] = i*2-1;
  }
  int t;
  cin >> t;
  int b = 0;
  int i = n;
  while (b == 0){
    if(a[i] == t){
      b = 1;
    }
    else if (a[i] > t){
      n/=2;
      i = n;
    }
    cout << i << " " << a[i] << "\n";
    if(a[i] == t){
       b = 1;
    }
    i++;
  }
  if(b == 1) cout << "The target is in the array\n";
  else cout << "The target is not in the array\n";
}