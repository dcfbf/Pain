#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;
int main(){
/* MAPS
	map <string, int> Games;
	Games["TMNF"] = 2008;
	Games["Mincraft"] = 2009;
	Games["BeamNG"] = 2014;
//	auto it = Games.find("TMNF");
	if(auto it = Games.find("TMNF"); it!=Games.end())cout<<it->second<<"\n";
	for(auto &[k,v]:Games) cout <<k<<": "<<v<<"\n";
*/
/* SET
	set <char> alphabet;
	alphabet.insert('a');
	alphabet.insert('b');
	cout << alphabet.size() <<"\n";
	for(auto &i:alphabet) cout<<i<<"\n";
	alphabet.erase('b');
	for(auto &i:alphabet) cout<<i<<"\n";
*/
	vector <int> v(5,5);
	for(auto &i:v) cout<<i<<"\n";
	cout <<"\n";
	v.push_back(1);
	for(auto &i:v) cout<<i<<"\n";
}
