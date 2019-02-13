#include<bits/stdc++.h>
using namespace std;

const int NAX = 1000000;
int p[NAX+2];
vector<int> prime,gemeos;
inline void crivo(){
	for(int i=2;i<(NAX+1);i++)
		if(p[i]==0){
			prime.push_back(i);
			for(int j=2;j*i<(NAX+1);j++)
				p[i*j]=i;
		}
}
int main(){
	int T,l,r;
	scanf("%d",&T);
	crivo();
	for(int i=1;i<(int)prime.size();i++)
		if(prime[i]-prime[i-1]==2)
			gemeos.push_back(prime[i-1]),gemeos.push_back(prime[i]);
	gemeos.resize(unique(gemeos.begin(),gemeos.end())-gemeos.begin());
	while(T--){
		scanf("%d %d",&l,&r); 
		int k=lower_bound(gemeos.begin(),gemeos.end(),l)-gemeos.begin();
		int x = lower_bound(gemeos.begin(),gemeos.end(),r+1)-gemeos.begin();
		x--;
		int cont=0;
		for(int i=k;i<=x and gemeos[i]<=r;i++)
			cont++;
		printf("%d\n",cont);
	}
}
