#include<iostream>

using namespace std;

int main(){

	int n,k;
	cin>>n>>k;
	
	n *= 2;
	int ans = 0;
	if(n<=k){
		ans = 2;
	}else{
		ans = n/k;
		if(n%k!=0) ans++;
	}
	cout<<ans;
	return 0;
}
