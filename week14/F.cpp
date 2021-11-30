#include <bits/stdc++.h>
using namespace std;


int main(){

	int n;
	cin>>n;
	vector<double> v(n);
	// 94.5 - 100 (4.00)
	// 89.5 - 94.4 (3.67)
	// 84.5 - 89.4 (3.33)
	// 80.5 - 84.3 (3.00)
	int sumofcredit = 0;
	cout<<endl;
	for(int i=0 ; i < n ; i++){
		int first, second, final, credit;
		cin>>first>> second>>final>>credit;
		double gpa = 0;
		int sum = first + second + final; 
		// 49 is not possibles
		// 30 >= attestaation
		// 20 >= final
		// minimum is 50
		if(first + second >= 30 and final >= 20 and sum > 49){
			if(sum >= 94.5){
				gpa = 4;
			}else if(sum >= 89.5){
				gpa = 3.67;
			}else if(sum >= 84.5){
				gpa = 3.34;
			}else if(sum >= 79.5){
				gpa = 3.00;
			}else if(sum >= 74.5){
				gpa = 2.67;
			}else if(sum >= 69.5){
				gpa = 2.34;
			}else if(sum >= 64.5){
				gpa = 2.00;
			}else if(sum >= 59.5){
				gpa = 1.67;
			}else if(sum >= 54.5){
				gpa = 1.34;
			}else{
				gpa = 1.00;
			}
		}
		// cout<<gpa << endl;
		sumofcredit+=credit;
		v[i] = gpa * credit;
	}

	double sumofgpa = 0;
	for(auto x: v){
		cout<<x<<endl;
		// cout<<sumofgpa<<endl;
		sumofgpa += x;
	}
	cout<<sumofgpa << " "<< sumofcredit<<endl;
	cout<< sumofgpa / sumofcredit;

	return 0;

}