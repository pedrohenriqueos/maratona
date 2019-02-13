#include<bits/stdc++.h>

using namespace std;

int S[500005];
int main(){
	int N,x=1,cont=0;
	scanf("%d",&N);
	vector<int> A(N);
	S[0]=0;
	for(auto &a:A){
		cin >> a;
		S[x]=S[x-1]+a;
		x++;
	}
	if(S[N]%3==0){
	int i=1,j=N;
	while(i<=j){
		
		if()
	}
	}
	cout << cont << '\n';
}
