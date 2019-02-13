#include<bits/stdc++.h>

using namespace std;

int main(){
	int T,N;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		char S[102];
		scanf(" %s",S);
		bool flag=false;
		for(int i=0,j=N-1;i<(N/2);i++,j--){
			int d=abs((int)(S[i]-'a')-(int)(S[j]-'a'));
			if(d>2 or d==1){
				flag=true;
				break;
			}
		}
		if(flag)
			printf("NO\n");
		else
			printf("YES\n");
	}
}
