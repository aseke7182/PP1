#include<iostream>
#include<cmath>
using namespace std;

int main(){

	int x;
	int cnt = 0;
	while(true){
		cin>>x;
		if(x%3!=0) break;
		cnt++;
	}
	cout<<cnt;

	return 0;
}
