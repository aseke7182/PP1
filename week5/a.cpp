#include<iostream>
using namespace std;


// void 
// what returns. function name ( type param1, type param2 ... ){

//	# ddadasdd

//	return 15;
//	return "asd";
// &15=b  &16 &17 ...
// [5]      []  [] [] [] 
// &15


int sum1(int A, int B){
	int sum = A + B;
	return sum;
}

void sum2(int A, int B){
	int sum = A + B;
	cout<<"func: "<< sum<<endl;
}

int sum3(int A, int &B){
	int sum = A + B;
	cout<<"sum3: " << sum << endl;
	B = 10;
	return sum;
}


int main(){

	int a,b;
	cin>>a>>b;
	int sum = sum1(a,b);
	// b = 5;
	sum2(a,b);
	cout<<b<<" ";
	int x = sum3(a,b);
	cout<<b<<" "<<endl;
	cout<<sum;

	// string a = 15;  error

	return 0;
}
