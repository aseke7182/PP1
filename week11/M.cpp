#include<iostream>
#include<cmath>
using namespace std;

//void 
//int 
//string

void f(int n, int now){

	if(now == n+1) 
		return;

	// for(int i=1 ; i <= n ; i++) 
		// cout<<i<< " ";

	cout<<now<<" ";

	f(n, now+1);

}


int main(){

	int n;
	cin>>n;

	f(n,1);


	return 0;
}