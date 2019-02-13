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
#define fora(i,a,N) for(int i=a;i<=N;i++)
#define forn(i,N) for(int i=0;i<N;i++)
#define fori(i,N,a) for(int i=N;i>=a;i--)

typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<ii> vii;

int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	cin >> N;
	string str;
	cin >> str;
	int b=0,r=0,g=0,cont=0;
	for(int i=1;i<N-1;i++){
		if(str[i]==str[i-1]){
			cont++;
			if(str[i]=='B'){
				if(str[i+1]=='G') str[i]='R';
				else str[i]='G';
			}else if(str[i]=='G'){
				if(str[i+1]=='B') str[i]='R';
				else str[i]='B';
			}else if(str[i]=='R'){
				if(str[i+1]=='G') str[i]='B';
				else str[i]='G';
			}
		}
	}
	if(str[N-1]==str[N-2]){
		cont++;
		if(str[N-1]=='B')
			str[N-1]='G';
		else if(str[N-1]=='G')
			str[N-1]='B';
		else
			str[N-1]='G';
	}
	cout << cont << '\n';
	cout << str << '\n';
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
