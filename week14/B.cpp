#include <bits/stdc++.h>
using namespace std;

long long my_pow(int a, int b){
	// here we should implement a^b;
	return 1; 
}

long long gen(){
	static long long i = 0;
	int k = my_pow(i,i);
	i++;
	return k ;
}

int main(){


	int n;
	cin>>n;
	vector<long long> v(n+1);
	generate(v.begin(), v.end(), gen);

	for(auto x: v){
		cout<<x<<" ";
	}

	return 0;
}