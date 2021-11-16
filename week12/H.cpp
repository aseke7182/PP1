#include <bits/stdc++.h>
using namespace std;

int main(){

	// 3 3 5 (2) 3 5(not right) or 3 3(right) 
	// set(3 5)
	int n;
	cin>>n;
	vector<int> v;
	// set<int> s;
	// set<int>::iterator it;
	int x;
	for(int i=0 ; i < n ; i++){
		cin>>x;
		v.push_back(x);
		// s.insert(x);
	}
	sort(v.begin(), v.end());
	int k;
	cin>>k;
	for(int i=0 ; i < k; i++){
		cout<<v[i] << " ";
	}

	// for(it = s.begin() ; k > 0 ; it++){
	// 	cout<< *it << " ";
	// 	k--;
	// }




	return 0;
}