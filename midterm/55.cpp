#include<iostream>
#include<cmath>
#include<algorithm>
#include<map>
#include<bits/stdc++.h>
using namespace std;


vector<string> split (string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find (delimiter, pos_start)) != string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (s.substr (pos_start));
    return res;
}

int main(){

	string s;
	getline(cin,s);

	unordered_map<int, bool> m;

	vector<string> v = split(s, ' ');
	for(auto x: v) m[x] = true;
	string x;
	getline(cin, x);
	int a = int(x);
	for(int i=1 ; i <= 50 ; i++){
		if(!m[i]){
			a--;
			if(!a){
				cout<<i;
				return 0;
			}
		}
	}


	


	return 0;
}
