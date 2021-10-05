#include<iostream>
#include <string>

using namespace std;

int main(){

	string s;
	cin>>s;

	bool ans = false;
	// arrca 
	// *arrca
	// a*rrca
	// ar*rca
	// ...
	// arrrca*

	for(int i=0 ; i <= s.size() ; i++){
		bool palindrom = true;
		string pat = "";
		string left = s.substr(0, i);
		string right = s.substr(i,s.size()-i);
		pat = left + "*" + right;
		for(int j=0 ; j < pat.size()/2 ; j++){
			if(pat[j] == '*' or pat[pat.size()-j-1] == '*'){
			 continue;
			}
			if(pat[j]!=pat[pat.size()-j-1]){
				palindrom = false;
			}
		}
		cout<< pat << " "<< palindrom<< endl;
		if(palindrom){
			ans = true;
		}
	}

	if(ans == true){
		cout<<"YES";
	}else{
		cout<<"NO";
	}   // if(1+1==2)


	// front() => str[0]
	// back() => str[str.size()-1]

	return 0;
}