#include<iostream>
#include<cmath>
using namespace std;

int main(){

	int n,x;
	cin>>n;
	int prev=-1;
	for(int i=0 ; i < n ; i++){
		cin>>x;
		if(x<prev){
			cout<<"Not sorted";
			return 0;
		}
		prev = x;
	}

	cout<<"Sorted";

	return 0;
}
