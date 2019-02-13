#include<bits/stdc++.h>
using namespace std;

int F[20010],V[20010],out[20010],N,x,Q,A[20010],block,resp=0;
map<int,int> Map;
pair< map<int,int>::iterator,bool> r;
struct _Query{
	int i,L,R;
};
typedef struct _Query Query;
Query Qe[20010];
void add(int p){
	F[p]++;
	V[F[p]]++;
	resp=max(V[F[p]],resp);
}
void rem(int p){
	V[F[p]]--;
	while(resp>0 and !V[resp]) resp--;
	F[p]--;
	//if(F[p]) V[F[p]]++;
}
bool cmp(Query a,Query b){
	if(a.L/block!=b.L/block)
		return a.L<b.L;
	if((a.L/block)&1)
		return a.R<b.R;
	return a.R>b.R;
}
int main(){
	scanf("%d %d",&N,&Q);
	block=sqrt(N);
	for(int i=0;i<N;i++){
		scanf("%d",&A[i]);
		r=Map.insert({A[i],x});
		if(r.second) x++;
		
	}
	for(int i=0;i<Q;i++){
		scanf("%d %d",&Qe[i].L,&Qe[i].R);
		Qe[i].L--,Qe[i].R--;
		Qe[i].i=i;
	}
	sort(Qe,Qe+Q,cmp);
	int left=0,right=-1;
	for(int i=0;i<Q;i++){
		Query &q=Qe[i];
		while(left<q.L) rem(Map[A[left++]]);
		while(left>q.L) add(Map[A[--left]]);
		while(right<q.R)add(Map[A[++right]]);
		while(right>q.R)rem(Map[A[right--]]);
		out[q.i]=resp;
	}
	for(int i=0;i<Q;i++)
		printf("%d\n",out[i]);
}
