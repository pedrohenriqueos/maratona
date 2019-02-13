#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	while(cin >> N >> M){
		if(N==0 and M==0) break;
	int prob[M+1],p[N+1],a,saida=0;
	memset(prob,0,sizeof(prob));
	memset(p,0,sizeof(p));
	bool p1=true,p2=true,p3=true,p4=true;
	for(int i=1;i<=N;i++){
		int cont=0;
		for(int j=1;j<=M;j++){
			cin >> a;
			if(a==1){
				cont++;
				prob[j]++;
				p[i]++;
			}
		}
		if(cont==M)
			p1=false;
	}
	for(int i=1;i<=N;i++)
		if(p[i]==0)
			p4=false;
	for(int i=1;i<=M;i++){
		if(prob[i]==N)
			p3=false;
		if(prob[i]==0)
			p2=false;
	}
	if(p1)
		saida++;
	if(p2)
		saida++;
	if(p3)
		saida++;
	if(p4)
		saida++;
	cout << saida << '\n';
	}
}
