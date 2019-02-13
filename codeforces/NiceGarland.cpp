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
	string str;
	cin >> N >> str;
	string p="BGR",p1="BRG",ok="",ok2="";
	int esc=0;
	for(int i=0;i<666667;i++)
		ok+=p,ok2+=p1;
	int out=inf,s=0;
	for(int n=0;n<3;n++){
		int cont=0;
		for(int i=0;i<N;i++)
			if(str[i]!=ok[i+n]) cont++;
		if(cont<out)
			out= cont,s=n,esc=1;
	}
	for(int n=0;n<3;n++){
		int cont=0;
		for(int i=0;i<N;i++)
			if(str[i]!=ok2[i+n]) cont++;
		if(cont<out)
			out= cont,s=n,esc=2;
	}
	cout << out << '\n';
	if(esc==1)
		for(int i=0;i<N;i++)
			cout << ok[i+s];
	else
		for(int i=0;i<N;i++)
			cout << ok2[i+s];
	cout << '\n';
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
