#include<bits/stdc++.h>
using namespace std;

int tree[(int)(4*1e6)];
void update(int node,int left,int right,int idx,double value){
	if(left==right){
		tree[node]+=value;
		return ;
	}
	int mid=(left+right)/2;
	if(left<=idx and idx<=mid)
		update(2*node,left,mid,idx,value);
	else
		update(2*node+1,mid+1,right,idx,value);
	tree[node]=tree[2*node]+tree[2*node+1];
	
}
int sum(int node,int l,int r,int left,int right){
	if(left>=l and r>=right)
		return tree[node];
	if(left>r or l>right)
		return 0;
	int mid =(left+right)/2;
	return sum(2*node,l,r,left,mid)+sum(2*node+1,l,r,mid+1,right);
}
int main(){
	int N;
	scanf("%d",&N);
	vector<int> A(N);
	for(auto &a:A){
		scanf("%d",&a);
		printf("%d\n",N-sum(1,a,(int)1e6,0,(int)1e6));
		update(1,0,(int)1e6,a,1);
	}
}
