#include<iostream>
#include <string>

using namespace std;

int main(){

	//1.[d]abbcd 
	//  [a]bbc
	//2. d[a]bbcd
	//	  [a]bbc
	//2.1 da[b]bcd
	//     a[b]bc
	//2.2 dab[b]cd
	//     ab[b]c
	//2.3 dabb[c]d
	//     abb[c]
	//2.4 dabbc[d]
	//     abbc[]

	// We changed c -> x;
	//1.[d]abbcd 
	//  [a]bbc
	//2. d[a]bbcd
	//	  [a]bbc
	//2.1 da[b]bcd
	//     a[b]bc
	//2.2 dab[b]cd
	//     ab[b]c
	// Changed //
	//2.3 dabb[x]d
	//     abb[c] indexT = 3 t.size()=4
	//2.4 dabbc[d]
	//     abbc[]
	//3 da[b]bxd
	//    [a]bbc

	string s, t;
	cin>>s>>t;

	bool ans = false;

	for(int i=0 ; i < s.size()-t.size()+1 ; i++ ){
		int indexT = 0;
		int indexS = i;
		if(s[indexS]==t[indexT]){
			while(s[indexS]==t[indexT]){
				indexS++;
				indexT++;
				if(indexT==t.size()){
					break;
				}
			}
			if(indexT==t.size()){
				ans = true;
				break;
			}
		}true
	}

	if(ans){
		cout<<"YES";
	}else{
		cout<<"NO";
	}

	return 0;
}