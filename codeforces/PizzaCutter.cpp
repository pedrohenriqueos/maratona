#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define f first
#define s second
#define bug(x) cerr << #x << " " << x << '\n';
#define _ << " " <<
#define int long long

int Merge(vector< pair<int,int> > &A){
	if((int)A.size()==1) return 0;
	vector< pair<int,int> > B,C;
	for(int i=0;i<(int)A.size()/2;i++)
		B.push_back(A[i]);
	for(int i=(int)A.size()/2;i<(int)A.size();i++)
		C.push_back(A[i]);
	int ans = Merge(B)+Merge(C);
	B.push_back({inf,inf});
	C.push_back({inf,inf});
	int b=0,c=0;
	for(int i=0;i<(int)A.size();i++){
		if(B[b].s<C[c].s)
			A[i] = B[b],b++;
		else{
			A[i] = C[c],c++;
			ans+=B.size()-b-1;
		}
	}
	return ans;
}
int X,Y,H,V;
main(){
	scanf("%lld %lld",&X,&Y);
	scanf("%lld %lld",&H,&V);
	vector< pair<int,int> > L(H),C(V);
	for(auto &l:L)
		scanf("%lld %lld",&l.f,&l.s);
	for(auto &c:C)
		scanf("%lld %lld",&c.f,&c.s);
	sort(L.begin(),L.end());
	sort(C.begin(),C.end());
	int m1 = Merge(L);
	int m2 = Merge(C);
	int l = ((int)L.size()+1)*((int)C.size()+1);
 	printf("%lld\n",m1+m2+l);
}
