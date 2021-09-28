#include<iostream>
#include <string>

using namespace std;

int main(){

	int n;
	cin>>n;
	int arr[n];

	for(int i=0 ; i < n ; i++){
		cin>>arr[i];
	}
	//			  i j
	// 3 4 1 2 5 (0,0)
	// 3 4 1 2 5 (0,1)
	// 1 4 3 2 5 (0,2) swapped
	//           (0,3)
	// 			 (0,4)
	//    	      (1,0) .. 11 .. 12 ,13 ,14 ... 55


	for(int i=0 ; i < n ; i++){
		for(int j=0 ; j < n ; j++){
			if(arr[i] < arr[j]){
				swap(arr[i], arr[j]);
				// swap = 	   int a = arr[i]; //          i
							// int b = arr[n-1-i]; // last - i , last -1-i
							// arr[i] = b;
							// arr[n-1-i] = a;
			}			
		}
	}
	// bubble sort

	for(int i=0 ; i < n ; i++){
		cout<<arr[i]<< " ";
	}



	return 0;
}