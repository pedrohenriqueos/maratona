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

typedef pair<int,int> ii;
typedef pair<int, ii> iii;

int32_t main(){
	int N;
	cin >> N;
	vector<int> A(N);
	for(auto &a:A) cin >> a;
	int out=0;
	for(int i=0;i<N;i++)
		for(int j=N-1;j>i;j--)
			if((j-i)==(A[j]-A[i])){
				out=max(out,j-i-1);
				//db(A[i] _ A[j]);
			}
	for(int i=0;i<N;i++){
		if((1000-A[i])==(N-i-1))
			out=max(out,N-i-1);
		if((A[i]-1)==i)
			out=max(out,i);
	}
	cout << out << '\n';
}



















