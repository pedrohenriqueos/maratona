#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	cin >> S;
	int Q[27],d=0;
	for(int i=0;i<27;i++)
		Q[i]=0;
	for(char c: S){
		Q[c-97]++;
		if(Q[c-97]==1)
			d++;
	}
	(d%2==0) ? cout << "CHAT WITH HER!\n" : cout << "IGNORE HIM!\n";
}
