#include <bits/stdc++.h>
using namespace std;

int main(){

	// vector<int> v(32,0); // (size, default value)
	int v[32];

	// cout<<v[30] // 0, 32, 3231231389
	for(int i=0 ; i < 32 ; i++ ){
		v[i] = 0;
	}

	// a - 'a' = 0
	// b - 'a' = 1;
	// ...
	// z - 'a' = 31;

	string s;
	cin>>s;
	for(int i=0 ; i < s.size() ; i++){
		int index = s[i] - 'a';
		v[index]++;
	}
	
	// odd occurences <= 1
	int cnt = 0;
	for(int i=0 ; i < v.size() ; i++){
		int x = v[i];
		if(x%2==1){
			cnt++;
		}
	}

	if(cnt > 1){
		cout<<"Onepiece";
	}else{
		cout<<"Luffy is the pirate king!"
	}



	return 0;
}