#include <bits/stdc++.h>
using namespace std;

// Riza's solution

bool getAns(int arr[], int n, int k, int i){​​​
	if(arr[i] == k) returnt rue;
	if(i == n) return false;
	return getAns(arr, n, k, ++i);
}​​​

// O(N)
// O(logN)

// 1 2 3 4 5 | l = 0, r=4 , mid = (l + r)/2;
// 5
// l = 0, r= 4, mid = 2;
// l = 3, r = 4, mid = 3;
// l = 4, r = 4, mid =4;





// while(l < r){
// 	if(arr[mid] == k){
// 		cout<<"yes";
// 	}else if(arr[mid] > k){
// 		r = mid - 1;
// 	}else if(arr[mid] < k){
// 		l = mid +1;
// 	}
// }

int main(){​​​
	int n;
    cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) 
		cin >> arr[i];
	int k;
	cin >> k;
	bool ok = getAns(arr, n, k, 0);
	if(ok) cout <<"Yes";
	else cout <<"No";
}​​​
