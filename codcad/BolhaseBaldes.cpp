#include<bits/stdc++.h>

using namespace std;

int bit[100002];
int N;
int sum(int x){
	int s=0;
	while(x>0){
		s+=bit[x];
		x-=(x&-x);
	}
	return s;
}
void add(int id,int v){
	while(id<=N){
		bit[id]+=v;
		id+=(id&-id);
	}
}
int main(){
	while(scanf("%d",&N)!=EOF){
		if(N==0) break;
		memset(bit,0,sizeof bit);
		int out=0;
		for(int i=1;i<=N;i++){
			int a;
			scanf("%d",&a);
			out+=(sum(N)-sum(a));
			add(a,1);
		}
		if(out&1)
			printf("Marcelo\n");
		else
			printf("Carlos\n");
	}
}
