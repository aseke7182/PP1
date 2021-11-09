#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

//void 
//int 
//string

void f(int arr[], int index, int k, int n){

	if(index == n){
		cout<<"no";
		return;
	}

	int diff = arr[index] - arr[index-1];
	if(diff <= k){
		cout<<"cheater";
		return;
	}

	f(arr, index+1, k, n);			

}


int main(){

	int n, k;
	cin>>n>>k;

	int arr[n];
	for(int i=0 ; i < n ; i++){
		cin>>arr[i];
	}

	// time complexity - O(time)
	// bubble sort - for for => O(N*N);
	// merge sort - N * logN => O(NlogN)

	sort(arr, arr+n);

	// for(int i=0 ; i < n ; i++){
		// cout<<arr[i]<< " ";
	// }

	f(arr, 1, k, n);

	// for(int i=1 ; i < n ; i++ ){
	// 	int diff = arr[i] - arr[i-1];
	// 	if(diff <= k){
	// 		cout<<"cheater";
	// 		return 0;
	// 	}
	// }

	// We need:
	// array
	// index, index-1
	// k - minutes
	// n 

	// cout<<"no";

	return 0;
}