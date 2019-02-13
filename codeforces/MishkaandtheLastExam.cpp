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
	int N;
	scanf("%lld",&N);
	vector<int> B(N/2),A(N);
	for(auto &b:B) scanf("%lld",&b);
	int r=B[0],l=0;
	A[N-1]=r,A[0]=l;
	for(int i=1;i<N/2;i++){
		if((B[i]-l)>r){
			A[N-i-1] = r,A[i]=B[i]-r;
			l=A[i];
		}else{
			A[N-i-1] = (B[i]-l),A[i]=l;
			r = A[N-i-1];
		}
	}
	for(auto &a:A)
		printf("%lld ",a);
	puts("");
}



















