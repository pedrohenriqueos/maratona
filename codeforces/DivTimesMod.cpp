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
	int N,K;
	cin >> N >> K;
	for(int p=sqrt(N);p<=N;p++){
		for(int i=1;i<K;i++){
			//cout << (p*K)+i << '\n';
			if((((p*K)+i)/K)*(((p*K)+i)%K)==N)
				return cout << (p*K)+i << '\n',0;
		}
	}
}



















