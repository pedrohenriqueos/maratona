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

int arr[(int)1e5],N,M;
char tree[4*((int)1e5)];
void build(int node,int left,int right){
	if(left==right){
		tree[node]=((arr[left]>0)?'+':((arr[left]<0)?'-':'0'));
		return ;
	}
	int meio=(left+right)/2;
	build(node<<1,left,meio);
	build((node<<1)+1,meio+1,right);
	tree[node]=((tree[node<<1]=='-' and tree[(node<<1)+1]=='-')?'+':
				(tree[node<<1]=='0' or tree[(node<<1)+1]=='0')?'0':
				(tree[node<<1]=='-' or tree[(node<<1)+1]=='-')?'-':'+');

}

void update(int node,int left,int right,int idx,int val){
	if(left==right){
		tree[node]=((val>0)?'+':((val<0)?'-':'0'));
		return ;
	}
	int meio=(left+right)/2;
	if(left <=idx and idx<=meio){
		update(node<<1,left,meio,idx,val);
	}else
		update((node<<1)+1,meio+1,right,idx,val);
	tree[node]=((tree[node<<1]=='-' and tree[(node<<1)+1]=='-')?'+':
				(tree[node<<1]=='0' or tree[(node<<1)+1]=='0')?'0':
				(tree[node<<1]=='-' or tree[(node<<1)+1]=='-')?'-':'+');
}

char produto(int node,int l,int r,int left,int right){
	if(left>=l and r>=right)
		return tree[node];
	if(left>r or l>right)
		return '+';
	int meio=(left+right)/2;
	char esq= produto(node<<1,l,r,left,meio);
	char dir= produto((node<<1)+1,l,r,meio+1,right);
	char out = ((esq=='-' and dir=='-')?'+':
				(esq=='0' or dir=='0')?'0':
				(esq=='-' or dir=='-')?'-':'+');
	return out;
}


int main(){
	while(cin >> N >> M){
		REP(i,N) cin >> arr[i];
		build(1,0,N-1);
		while(M--){
			char in;
			cin >> in;
			int a,b;
			if(in=='C'){
				cin >> a >> b;
				update(1,0,N-1,a-1,b);
			}else{
				cin >> a >> b;
				cout << produto(1,a-1,b-1,0,N-1);
			}

		}
		cout << '\n';
	}
}
