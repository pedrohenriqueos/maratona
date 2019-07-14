#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi acos(-1)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
template<class T> bool mmin(T &a,T b){return (a>b ?(a=b,true):false);};
template<class T> bool mmax(T &a,T b){return (a<b ?(a=b,true):false);};

struct SegTreeLazy{
	int tree[400000]={0},lazy[400000]={0},arr[100000];// tree e lazy 4*tam_arr
	void build(int node,int left,int right){
		if(left==right){
			tree[node]=arr[left];
			return ;
		}
		int mid=(left+right)/2;
		build(2*node,left,mid);
		build(2*node+1,mid+1,right);
		tree[node]= max(tree[2*node],tree[2*node+1]);
	}
	void update(int node,int left,int right,int l,int r,int value){
		if(left>r or l>right)
			return ;
		if(left>=l and r>=right){
			tree[node]=(right-left+1)*value;
			if(right!=left){
				lazy[2*node]=value;
				lazy[2*node+1]=value;
			}
			return ;
		}
		int mid=(left+right)/2;
		update(2*node,left,mid,l,r,value);
		update(2*node+1,mid+1,right,l,r,value);
		tree[node]=max(tree[2*node],tree[2*node+1]);
	}
	int sum(int node,int l,int r,int left,int right){
		if(left>r or l>right)
			return 0;
		if(left>=l and r>=right)
			return tree[node];
		int mid=(left+right)/2;
		return max(sum(2*node,l,r,left,mid),sum(2*node+1,l,r,mid+1,right));
	}
};
typedef struct SegTreeLazy seg;

int32_t main(){
	
	int t,n,k,cas=1;
	scanf("%d",&t);
	while(t--){
		seg a,b;
		scanf("%d %d",&n,&k);
		for(int i=0;i<n;i++)
			scanf("%d",&a.arr[i]);
		for(int i=0;i<n;i++)
			scanf("%d",&b.arr[i]);
		a.build(1,0,n-1);
		b.build(1,0,n-1);
		int out =0;
		for(int i=0;i<n;i++)
			for(int j=i;j<n;j++){
				if(abs(a.sum(1,i,j,0,n-1)-b.sum(1,i,j,0,n-1))<=k){
					out++;
				}
			}
		printf("Case #%d: %d\n",cas++,out);
	}
	
	
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}



















