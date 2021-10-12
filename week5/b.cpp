#include<iostream>
#include<cmath>
using namespace std;

int* difff_between_arrays(int a[], int b[], int size){
	for(int i=0 ; i < size ; i++){
		a[i] = abs(a[i]-b[i]);
	}
	return a;
}

int main(){

	int n;
	cin>>n;
	int arr1[n];
	int arr2[n];
	for(int i=0 ; i < n ; i++){
		cin>>arr1[i];
	}	
	for(int i=0 ; i < n ; i++){
		cin>>arr2[i];
	}
	int *arr3 = difff_between_arrays(arr1, arr2, n);
	for(int i=0 ; i < n ; i++){
		cout<<arr3[i]<< " ";
	}

	return 0;
}
