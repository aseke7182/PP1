#include<iostream>
#include<cmath>
using namespace std;

// Mikhail's Solution

string f(int n, int k, string ans){
	if(n==0){
		return ans;
	}
	int x = n%k;
	if(x <10){
		return f(n/k, k, to_string(x)+ans); 
	}else{
		char c = ('A' + x - 10);
		return f(n/k, k, c + ans);	 
	}
}

// 1000 30
// return("asd")) => ans some string


int main(){

	int n,k;
	cin>>n>>k;

	// 15 (10) - 150, 90
	// 1111 (2) 
	// 0-7 (8) - 0-0,1-1,2-2,... 8(10)-10(8), 9 - 11, 10 
	// 16(10) => 10 (16)

	// 0 - 0 
	// 1-1
	// 2-2
	// 3-10
	// 4- 11
	// 5 - 12
	// 6 - 20
	// 7 -21


	// 10 -> 2
	// 10 -> 8
	// 10 -> 16

	// 10 -> 3
	// 10 -> 36

	string ans = f(n, k, "");

	// Without recursion:
	// while(n!=0){
	// 	int x = n%k;
	// 	if(x < 10){
	// 		ans = to_string(x) + ans;
	// 	}else{
	// 		char c = ('A' + x - 10);
	// 		ans = c + ans; 
	// 	}
	// 	n/=k;
	// }

	cout<<ans;

	return 0;
}