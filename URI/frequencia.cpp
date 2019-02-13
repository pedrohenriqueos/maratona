#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int i=0;i<N;i++){
		if(i==0)
			cin.ignore();
		string S,A;
		int C[26];
		for(int a=0;a<26;a++)
			C[a]=0;
		getline(cin,S);
		for(char c:S){
			if(c>=65 and c<=90)
				C[c-65]++;
			if(c>=97 and c<=122)
				C[c-97]++;
		}
		int maior=0;
		for(int a=0;a<26;a++)
			if(C[a]>maior)
				maior = C[a];
		for(int a=0;a<26;a++)
			if(C[a]==maior)
				A+=(a+97);
		cout << A << '\n';
	}
}
