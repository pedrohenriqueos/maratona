#include<bits/stdc++.h>

using namespace std;
#define f first
#define s second
int bit[1000010];
int N;
void add(int id,int x){
	while(id<=N){
		bit[id]+=x;
		id+=(id&-id);
	}
}
int sum(int id){
	int s=0;
	while(id>0){
		s+=bit[id];
		id-=(id&-id);
	}
	return s;
}
int main(){
	scanf("%d",&N);
	vector< pair<int,pair<int,char> > > A(N);
	for(auto &a:A)
		scanf("%d %d %c",&a.f,&a.s.f,&a.s.s);
	sort(A.begin(),A.end());
	for(int i=0;i<N;i++)
		if(A[i].s.s=='w')
			add(i+1,1);
	int out=0;
	for(int i=0;i<N;i++)
		out=max(out,max(sum(i+1)+((N-i-1)-(sum(N)-sum(i+1))),(i+1)-sum(i+1)+(sum(N)-sum(i+1))));
	printf("%d\n",out);


}
