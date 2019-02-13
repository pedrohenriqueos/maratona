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

int N;
bool check(vector<int> &A){
	for(int i=1;i<N;i++)
		if(A[i]<A[i-1])
			return false;
	return true;
}
void print(vector<int> &A){
	for(auto a:A)
		cout << a << " ";
	puts("");
}
int32_t main(){
	cin >> N;
	vector<int> A(N);
	for(auto &a:A) cin >> a;
	vector< pair<int,ii> > V;
	for(int i=N-1;i>=0;i--){
		if(A[i]%(N+1)!=(i+1)){
			int val = ((i+1)-A[i]%(N+1));
			if(val<0) val+=(N+1);
			V.pb({1,{i+1,val}});
			for(int j=0;j<=i;j++)
				A[j]+=val;
		}
	}
	if(!check(A)){
		V.pb({2,{N,N+1}});
	}
	cout << (int)V.size() << '\n';
	for(auto v:V)
		cout << v.f << " " << v.s.f << " " << v.s.s << '\n';
}



















