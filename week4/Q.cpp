#include<iostream>
#include <string>

using namespace std;

int main(){

	string s,t;
	cin>>s>>t;
	int sizeS = s.size();
	int sizeT = t.size();
	//  3     9
	// abc abcabcabc
	//	abc + abc + abc

	//  4       11
	// test testtesttes
	// test + test + test
	// testtesttest
	// testtesttes

	if(sizeT % sizeS == 0){	

		int times = sizeT / sizeS;

		string pat = "";

		for(int i=0 ; i < times ; i++){
			pat += s;
		}
		cout<<pat<<endl;
		if(pat == t){
			cout<<"YES";
		}else{
			cout<<"NO";
		}

	}else{
		cout<<"NO";
	}



	return 0;
}