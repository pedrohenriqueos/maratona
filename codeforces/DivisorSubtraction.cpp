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
int prime[100002];
vector<int> P;
inline void crivo(){
	prime[1]=1;
	for(int i=2;i<100001;i++){
		if(!prime[i]){
			P.pb(i);
			for(int j=2;j*i<100001;j++)
				prime[j*i]=j;
		}
	}
}

int32_t main(){
	crivo();
	int N,cont=0;
	cin >> N;
	for(int i=0;i<(int)P.size();i++){
		if(N%P[i]==0){
			cout << (1LL+(N-P[i])/2LL) << '\n';
			return 0;
		}
	}
	cout << "1\n";
}



















