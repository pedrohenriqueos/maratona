#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,out=0;
	cin >> N;
	string str[N];
	int A[N];
	for(int i=0;i<N;i++){
		cin >> str[i];
		int cont=0;
		for(int j=0;j<str[i].size();j++){
			if(str[i][j]=='(')
				cont++;
			else
				cont--;
		}
		A[i]=cont;
		if(!cont)
			out++;
	}
	for(int i=0;i<N;i++)
		for(int j=i+1;j<N;j++)
			if((A[i]+A[j])==0)
				cont++;
	cout << out << '\n';
}
