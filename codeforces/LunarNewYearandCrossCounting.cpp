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

int N,cont;
string Mat[505];
inline char check(int x,int y){
	if(x>=0 and x<N and y>=0 and y<N)
		return Mat[x][y];
	return 'a';
}

int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> N;
	forn(i,N)
		cin >> Mat[i];
	forn(x,N)
		forn(y,N){
			if(check(x,y) == check(x-1,y-1) and check(x,y) == check(x+1,y+1) and check(x,y) == check(x-1,y+1) and check(x,y) == check(x+1,y-1) and check(x,y) == 'X')
				cont++;
		}
	cout << cont << '\n';
	
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
