#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int n=0;n<N;n++){
		int one=0,two=0,three=0;
		string S;
		cin >> S;
		if(S[0]=='o')
			one++;
		if(S[1]=='n')
			one++;
		if(S[2]=='e')
			one++;
		if(S[0]=='t')
			two++;
		if(S[1]=='w')
			two++;
		if(S[2]=='o')
			two++;
		if(S.size()>3){
			if(S[0]=='t')
				three++;
			if(S[1]=='h')
				three++;
			if(S[2]=='r')
				three++;
			if(S[3]=='e')
				three++;
			if(S[4]=='e')
				three++;
		}
	if(one>1) 
		cout << "1\n"; 
	if(two>1) 
		cout << "2\n";
	if(three>3)
		cout << "3\n";	
	}

}
