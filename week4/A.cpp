#include<iostream>
#include <string>

using namespace std;

int main(){

	string s;
	cin>>s;
	int lower = 0;
	int upper = 0;

	for(int i=0 ; i< s.size() ; i++){
		if(s[i] >= 'A' and s[i] <= 'Z'){
			upper += 1;
		}else if(s[i] >= 'a' and s[i] <= 'z'){
			lower += 1;
			// ex. B: s[i] = s[i] + 'a' - 'A';
		}
	}

	// a - A = 32

	cout<< 'a' - 'A'<< endl;

	cout<<"lower: " << lower <<endl;
	cout<<"upper: " << upper <<endl;

	return 0;
}