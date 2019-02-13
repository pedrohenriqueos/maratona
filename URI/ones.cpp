#include<bits/stdc++.h>
using namespace std;

int main(){
	long long N;
	unsigned long long S[20];
	S[1]=1;
	for(int i=2;i<=19;i++)
		S[i] = S[i-1]*10+1;
	while(cin >> N){
	int i=1;
	for(i=1;i<=19;i++)
		if(S[i]%N==0)
			break;
	cout << i << '\n'; 
	}
}
