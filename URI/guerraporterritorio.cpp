#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	scanf("%d",&N);
	int A[N],visit[N];
	memset(visit,0,sizeof(visit));
	for(int i=0;i<N;i++)
		scanf("%d",&A[i]);
	visit[0]=1,visit[N-1]=1;
	int soma1=A[0],soma2=A[N-1],i1=1,i2=N-2;
	while(i1!=i2-1){
		if(soma1>=soma2){
			soma2+=A[i2];
			i2--;	
		}
		if(soma2>=soma1){
			soma1+=A[i1];
			i1++;
		}
		//cout << soma1 << " " << soma2 << '\n';
	}
	printf("%d\n",i1);
}
