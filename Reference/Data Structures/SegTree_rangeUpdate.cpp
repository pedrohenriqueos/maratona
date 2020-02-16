//Acordes Intergaláticos - Sub/2017
#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100000;
int n,q;
int tree[4*MAXN][9],lazy[4*MAXN],ans[9];

void build(int node,int left,int right){
	if(left==right){
		tree[node][1]++;
		return ;
	}
	int mid = (left+right)>>1;
	build(node<<1,left,mid);
	build(node<<1|1,mid+1,right);
	tree[node][1] = tree[node<<1][1] + tree[node<<1|1][1];
}

inline void updateLazy(int node,int left,int right){
	if(lazy[node]){
		vector<int> aux(9,0);
		for(int i=0;i<9;i++)
			aux[(i+lazy[node])%9]+=tree[node][i];
		for(int i=0;i<9;i++)
			tree[node][i] = aux[i];
		if(left!=right){
			lazy[node<<1] +=lazy[node];
			lazy[node<<1|1] +=lazy[node];
		}
		lazy[node]=0;
	}
}

void update(int node,int left,int right,int l,int r,int value){
	updateLazy(node,left,right);
	if(left>r or l>right)
		return ;
	if(left>=l and r>=right){
		lazy[node] +=value;
		updateLazy(node,left,right);
		return ;
	}
	int mid = (left+right)>>1;
	update(node<<1,left,mid,l,r,value);
	update(node<<1|1,mid+1,right,l,r,value);
	for(int i=0;i<9;i++){
		tree[node][i] = tree[node<<1][i] + tree[node<<1|1][i];
	}
}

void query(int node,int left,int right,int l,int r){
	updateLazy(node,left,right);
	if(left>r or l>right){
		return ;
	}
	if(left>=l and r>=right){
		for(int i=0;i<9;i++)
			ans[i] += tree[node][i];
		return ;
	}
	int mid = (left+right)>>1;
	query(node<<1,left,mid,l,r);
	query(node<<1|1,mid+1,right,l,r);
}

inline void F(int l,int r){
	memset(ans,0,sizeof ans);
	query(1,0,n-1,l,r);
	pair<int,int> freq={0,0};
	for(int i=0;i<9;i++){
		if(freq.first<=ans[i])
			freq={ans[i],i};
	}
	update(1,0,n-1,l,r,freq.second);
}

void output(int node,int left,int right){
	updateLazy(node,left,right);
	if(left==right){
		for(int i=0;i<9;i++)
			if(tree[node][i]){
				printf("%d\n",i);
				break;
			}
		return ;
	}
	int mid = (left+right)>>1;
	output(node<<1,left,mid);
	output(node<<1|1,mid+1,right);
}

int32_t main(){
	int l,r;
	scanf("%d %d",&n,&q);
	build(1,0,n-1);
	while(q--){
		scanf("%d %d",&l,&r);
		F(l,r);
	}
	output(1,0,n-1);
}
