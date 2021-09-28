#include<iostream>
using namespace std;

int main(){


	string s = "abcbba";
	cout<< s[2]<<endl;
	// string s1 = "abbca";  // acbba

	// is string palindrom?

	// string s2 = reverse(s.begin(),s.end());
	// s == s2;
	// it will work!
	// while() , do while
	bool palindrom = true;
	for(int i=0 ; i < s.size() ; i++){
		if(s[i] != s[s.size()-1-i]){
			// 0 6
			// 1    5
			// 2   4
			// 3   3
			// 4 2
			// 5 1
			// 6 0
			palindrom = false;
			break;
		}
		cout<< s[i] << " " <<s[s.size()-1-i] << endl;
	}


	if(palindrom == true){		
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}


	return 0;
}