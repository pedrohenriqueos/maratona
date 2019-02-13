#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi acos(-1)
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define FORI(i,a,n) for(int i=a;i>=n;i--)
#define REP(i,n) FOR(i,0,n)
#define all(a) a.begin(),a.end()

typedef long long ll;
typedef unsigned long long  ull;
typedef vector<int> vi;
typedef vector< ll > vll;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector< ii > vii;
typedef vector< iii > viii;

int N,M,K,arr[(int)1e6],tree[(int)1e6],lazy[(int)1e6];
void build(int node,int left,int right){
	if(left>right) return ;
	if(left==right){
		tree[node]=arr[left];
		return ;
	}
	int meio=(left+right)/2;
	build(2*node,left,meio);
	build(2*node+1,meio+1,right);
	tree[node]=tree[2*node]+tree[2*node+1];
}
void update(int node,int left,int right,int l,int r,int v){
	if(left>r or right<l)
		return ;
	if(lazy[node]){
		tree[node]+=(right-left+1)*lazy[node];
		if(right!=left)
			lazy[2*node]+=lazy[node],lazy[2*node+1]+=lazy[node];
		lazy[node]=0;
	}
	if(left>=l and right<=r){
		tree[node]+=(right-left+1)*v;
		if(left!=right)
			lazy[2*node]+=v,lazy[2*node+1]+=v;
		return ;
	}
	int meio=(left+right)/2;
	update(2*node,left,meio,l,r,v);
	update(2*node+1,meio+1,right,l,r,v);
	tree[node]=tree[2*node]+tree[2*node+1];
}

int sum(int node,int left,int right,int l,int r){
	if(left>r or right<l)
		return 0;
	if(lazy[node]){
		tree[node]+=(right-left+1)*lazy[node];
		if(left!=right)
			lazy[2*node]+=lazy[node],lazy[2*node+1]+=lazy[node];
		lazy[node]=0;
	}
	if(left>=l and right<=r)
		return tree[node];
	int meio=(left+right)/2;
	return sum(2*node,left,meio,l,r)+sum(2*node+1,meio+1,right,l,r);
}

int main(){
	cin >> N >> M >> K;
	REP(i,N) cin >> arr[i];
	build(1,0,N-1);
	while(M--){
		int a,b,c;
		cin >> a >> b >> c;
		update(1,0,N-1,a-1,b-1,c);
	}
	while(K--){
		int a,b;
		cin >> a >> b;
		cout << sum(1,0,N-1,a-1,b-1) << " ";
	}
}




