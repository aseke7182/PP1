#include<iostream>
using namespace std;

int main(){

	int n, m;
	cin>>n;
	int arr1[n];
	for(int i=0 ; i < n ; i++){
		cin>>arr1[i];
	}
	cin>>m;
	int arr2[m];
	for(int i=0 ; i < m ; i++){
		cin>>arr2[i];
	}

	int ans[n+m]; //  1)arr1 + arr2  => sort
	int i=0;
	int j=0;
//	4 5 6 7 10  arr1 i=1  arr1[5] // error
//	2 4 6 7 8 	arr2 j=1
	// ans = 2, 4, 4, 5, 
	int index1 = 0;
	for(int index=0 ; index < n+m ; index++){
		if(i==n or j==m){
			index1 = index;
			break;	
		} 	
		if(arr1[i] > arr2[j]){
			ans[index] = arr2[j];
			j++;
		}else{
			ans[index] = arr1[i];
			i++;
		}
	}

	while(i < n){
		ans[index1] = arr1[i];
		i++;
		index1++;
	}
	while(j < m){
		ans[index1] = arr2[j];
		j++;
		index1++;
	}

	for(int i=0 ; i< n+m ; i++){
		cout<<ans[i]<<" ";
	}


	return 0;
}