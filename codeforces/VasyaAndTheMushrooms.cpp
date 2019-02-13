#include<bits/stdc++.h>

using namespace std;
#define inf 0x3f3f3f3f
int A[300002][2];
int N;
int func(pair<int,int> p,int temp){
	int ans=0;
	for(int i=p.first;i<N;i++)
		ans+=(A[i][p.second]*temp++);
	for(int i=N-1;temp!=(2*N);i--)
		ans+=(A[i][!p.second]*temp++);
	return ans;
}
int dp(pair<int,int> p, int temp, int pa){
	if(p.first<0 or p.second<0 or p.first>=N or p.second>1)
		return inf;
	if(temp==(2*N-1)) return A[p.first][p.second]*temp;
	if(pa==2)
		return func(p,temp);
	return min(dp({p.first,!p.second},temp+1,0)+A[p.first][p.second]*temp
			  ,dp({p.first+1,p.second},temp+1,pa+1)+A[p.first][p.second]*temp);
}
int main(){
	scanf("%d",&N);
	for(int i=0;i<N;i++)
		scanf("%d",&A[i][0]);
	for(int i=0;i<N;i++)
		scanf("%d",&A[i][1]);
	printf("%d\n",dp(make_pair(0,0),0,1));
}
