#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M,A,B;
	while(cin >> N >> M and N and M){
	string s[N];
	for(int i=0;i<N;i++)
		cin >> s[i];
	cin >> A >> B;
	for(int i=0;i<N;i++)
		for(int a=1;a<=A/N;a++){
			for(int j=0;j<s[i].size();j++)
				for(int k=1;k<=B/M;k++)
					cout << s[i][j];
			cout << '\n';
		}
	cout << '\n';
	}
}
