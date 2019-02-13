#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	while(cin >> N){
	bool  flag=false;
	for(int i=0;i<=sqrt(N);i++)
		for(int j=0;j<=sqrt(N);j++)
			if(i*i+j*j==N){
				flag=true;
				break;
			}
	cout << ((flag)?"YES\n":"NO\n");
	}
}
