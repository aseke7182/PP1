#include<iostream>
using namespace std;

int main(){

	string s = "asdewxcvxbqdfgfd";
	for(int i=0 ; i < s.size() ; i++){
		cout<<s[i];
		if(s[i]=='q'){
			break;
		}
	}
	cout<<" end";

	return 0;
}