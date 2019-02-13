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

double tree[(int)(4*1e5)],arr[(int)1e5];
void build(int node,int left,int right){
	if(left==right){
		tree[node]=arr[left];
		return ;
	}
	int mid=(left+right)/2;
	build(2*node,left,mid);
	build(2*node+1,mid+1,right);
	tree[node]= tree[2*node]+tree[2*node+1];
}
void update(int node,int left,int right,int idx,double value){
	if(left==right){
		tree[node]=value;
		return ;
	}
	int mid=(left+right)/2;
	if(left<=idx and idx<=mid)
		update(2*node,left,mid,idx,value);
	else
		update(2*node+1,mid+1,right,idx,value);
	tree[node]=tree[2*node]+tree[2*node+1];
	
}
double sum(int node,int l,int r,int left,int right){
	if(left>=l and r>=right)
		return tree[node];
	if(left>r or l>right)
		return 0.0;
	int mid =(left+right)/2;
	return sum(2*node,l,r,left,mid)+sum(2*node+1,l,r,mid+1,right);
}
int main(){
    int N,Q;
    scanf("%d",&N);
    REP(i,N) scanf("%lf",&arr[i]);
    scanf("%d",&Q);
	build(1,0,N-1);
    while(Q--){
        int a;
        scanf("%d",&a);
        if(a==1){
          	int b;
			double c; 
         	scanf("%d %lf",&b,&c);
         	update(1,0,N-1,b-1,c);
        }else{
            int l,r;
            scanf("%d %d",&l,&r);
          	printf("%lf\n",(sum(1,l-1,r-1,0,N-1))/(double)(r-l+1));
        }
    }
    return 0;
}
