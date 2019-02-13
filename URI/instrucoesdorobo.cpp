#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int i=0;i<N;i++){
		int M,a=0;
		cin >> M;
		string S[M+1];
		cin.ignore();
		for(int j=1;j<=M;j++){
			getline(cin,S[j]);
			if(S[j]=="LEFT")
				a--;
			else if(S[j]=="RIGHT")
				a++;
			else{
				int q=0;
				for(int i=8;i<S[j].size();i++)
					q=q*10+(int)(S[j][i]-'0');
				if(S[q]=="LEFT"){
					a--;
					S[j]="LEFT";
				}if(S[q]=="RIGHT"){
					a++;	
					S[j]="RIGHT";
				}
			}
		}		
		cout << a << '\n';
	}

}
