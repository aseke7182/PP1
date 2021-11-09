#include<iostream>
#include<cmath>
using namespace std;

int main(){


	string s;
	cin>>s;
	int ans = 0;
	for(int i=s.size()-1 ; i >= 0  ; i--){
		ans += pow(26,s.size()-i-1) * (s[i] - 'A'+1);
	}
	cout<<ans;

	return 0;
}
