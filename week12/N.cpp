#include <bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	map<int,bool> m;  // key, value
	map<int,bool>::iterator it;
	vector<int> v;
	vector<int> v_new;
	int x;
	set<int> s;
	set<int>:: iterator it1;
	for(int i=0 ; i < n ; i++){
		cin>>x;
		s.insert(x);
		it = m.find(x);
		if( it == m.end()){
			v.push_back(x);
		}
		m[x] = true;
	}

	// Solution 1 (not Accepted, array not sorted, using vector)
	// for(auto a:v){
	// 	if(a%2==0) continue;
	// 	cout<<a<< " ";
	// }

	// Solution with set(accepted, just cout)
	// for(auto x:s){
	// 	if(x%2==0) continue;
	// 	cout<< x << " ";
 	// }

	// Solution with set(erase)
	for(it1 = s.begin() ; it1 != s.end() ;){
	    if (*it1 % 2 == 0) {
 		   it1 = s.erase(it1);
	    }
	    else {
	        ++it1;
	    }
	}
	// x++ Vs. ++x;
	// x++; code then i += 1
	// ++x; i+=1 then code

	for(auto x: s){
		cout<< x << " ";
	}



	// 7
	// 5 2 3 2 4 2 2
	// ans: 3 5
	// 5 3

	// Solution 2 (not accepter, array not sorted, using vector)
	// for(int i=0 ; i < v_new.size() ; i++){
	// 	if(v_new[i]%2==0){
	// 		v_new.erase(v_new.begin()+i);
	// 		i--;
	// 	}
	// }

	// 1 2 4 3 5  | i =1
	// 1 4 3 5 | i = 2

	// for(auto x:v_new){
	// 	cout<< x<< " ";
	// }

	return 0;
}