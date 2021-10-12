#include<iostream>
using namespace std;

int main(){

	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0 ; i < n  ; i++){
		for(int j=0 ; j < m ; j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0 ; i < m ; i++){
		int sum = 0;
		for(int j=0 ; j < n ; j++){
			// j = index of row
			// i = index of column;
			sum += arr[j][i];
		}
		cout<<sum<<endl;
	}


	. . . . .
	. . . . .
	. . . . .
	. . . . .
	. . . . .


	return 0;
}
