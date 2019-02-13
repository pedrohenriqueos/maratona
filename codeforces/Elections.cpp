#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi acos(-1)
#define f first
#define s second
#define pb push_back
#define all(a) a.begin(),a.end()
#define db(a) cerr << #a << " = " << a << '\n';
#define _ << " , " << 
#define int long long

typedef pair<int,int> ii;
typedef pair<int, ii> iii;

int32_t main(){
	int N,l=0,sum=0;
	cin >> N;
	vector<int> A(N);
	for(auto &a:A){
		cin >> a,l=max(l,a);
		sum+=a;	
	}
	int r=(int)1e9,resp=(int)1e9;
	while(l<=r){
		int m = (l+r)/2;
		int k=0;
		for(int i=0;i<N;i++)
			k+=(m-A[i]);
		if(k>sum){
			resp=min(m,resp);
			r=m-1;
		}else{
			l=m+1;
		}
	}
	cout << resp << '\n';
}



















