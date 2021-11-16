#include <bits/stdc++.h>
using namespace std;

int main(){

	string s1,s2;
	getline(cin, s1);
	getline(cin, s2);
	vector<string> v1; // N- size
	vector<string> v2; // M - size
	string pat = "";
	for(int i=0 ; i < s1.size() ; i++){
		if(s1[i] == ' '){
			v1.push_back(pat);
			pat = "";
		}else{
			pat += s1[i];
		}
	}
	v1.push_back(pat);
	pat = "";

	for(int i=0 ; i < s2.size() ; i++){
		if(s2[i] == ' '){
			v2.push_back(pat);
			pat = "";
		}else{
			pat += s2[i];
		}
	}
	v2.push_back(pat);
	// 1 3 2
	// 12 3 45654
	// 1. Convert from string to int
	// 2. In vector we store string

	
	// for(v1...)
	// 	for(v2...)
	// 		if(v2[i]==v1[j])
	// 			cnt++
	
	// time complexity
	// O(N*M)
	// cout<<cnt;

	map<string, bool> m;

	// key, value

	for(int i=0 ; i < v1.size() ; i++){
		m[v1[i]] = true;
	}

	int cnt = 0;

	for(int i=0 ; i < v2.size() ; i++){
		// m.find(value)
		// m.end() => not found!
		// it => index;
		// if(m.find(v2[i]) != m.end()){
		// 	cnt++;
		// }

		if(m[v2[i]] == true){
			cnt++;
		}

	}


	cout<<cnt;
	// O( N + M )


	return 0;
}