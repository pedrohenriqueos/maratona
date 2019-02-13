#include<bits/stdc++.h>

using namespace std;

int R[200001];
int main(){
	int N,M;
	scanf("%d %d",&N,&M);
	vector<long long> A(N);
	stack< pair<int,long long> > B[M];
	int pos=0;
	for(int a:A){
		scanf("%d",&a);
		R[a%M]++;
		B[a%M].push({pos++,a});
	}
	int k=N/M,out=0;
	for(int q=0;q<2;q++)
		for(int i=0;i<M;i++)
			if(R[i]>k){
				int x=R[i]-k;
				R[i]-=x;
				R[(i+1)%M]+=x;
				out+=x;
				for(int k=0;k<x;k++){
					B[(i+1)%M].push({B[i].top().first,B[i].top().second+1LL});
					B[i].pop();
				}
			}
	vector< pair<int,long long> > K;
	printf("%d\n",out);
	for(int x=0;x<M;x++)
		while(!B[x].empty()){
			K.push_back(B[x].top());
			B[x].pop();
		}
	long long Saida[N];
	for(int i=0;i<N;i++)
		Saida[K[i].first]=K[i].second;
	for(int n=0;n<N;n++)
		printf("%lld ",Saida[n]);
	printf("\n");
}
