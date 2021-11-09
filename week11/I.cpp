#include <iostream>
using namespace std;

// Zhannel's solution

long long sequence(long long sum){
	int x;
	cin>>x;
	if(x==0)
	  return sum;
	return sequence(sum+x);
}


int main(){

	// int - 32
	// short - 
	// long 
	// long long - 64
	// 0 - inf.
	// unsigned = 
	// int (-2^32 , 2^32);
	// unsigned (0, 2 * 2^32);
    long long sum=0;
    cout<<sequence(sum);
    return 0;
}