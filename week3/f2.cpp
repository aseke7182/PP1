#include<iostream>
using namespace std;

int main(){


	int n;
	cin>>n; // 4
	int arr[n]; // 1 ,2 ,
	int x;
	for(int i=0 ; i < n ; i++){
		cin>>x;
		arr[i] = x;
	}



	for(int i=0 ; i < n / 2 ; i++){
		// arr[i] , arr[n-1-i];
						//  1 2 3 4
			//			    1 2 3 4 5
		//arr[i] = arr[n-1-i];  // 4 2 3 4
		//arr[n-1-i] = arr[i]; // 4 2 3 4
 
		int a = arr[i]; //          i
		int b = arr[n-1-i]; // last - i , last -1-i
		arr[i] = b;
		arr[n-1-i] = a;
	}

	for(int i=0 ; i < n ; i++){
		cout<<arr[i] << " ";
	}

	return 0;
}