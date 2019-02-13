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
#define int long long

typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<ii> vii;

const int MAXN = 1000002;
int N,a,b,out,p1,p2,cont;
string str;
int pref[MAXN],suf[MAXN];
bool ok1[MAXN],ok2[MAXN];

int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> N >> str;
	if(N&1)
		return cout << "0\n",0;
	forn(i,N){
		a+=(str[i]=='('),b+=(str[i]==')');
	}
	if(abs(a-b)>2 or a==b)
		return cout << "0\n",0;
	if(str[0]!='(' or str[N-1]!=')'){
		if(str[0]!='('){
			p1=1,p2=0;
			fora(i,1,N){
				p1+=(str[i]=='(');
				p2+=(str[i]==')');
				if(p2>p1) break;
			}
			if(p1==p2) out++;
		}else{
			p2=1,p1=0;
			forn(i,N-1){
				p1+=(str[i]=='(');
				p2+=(str[i]==')');
				if(p2>p1) break;
			}
			if(p1==p2) out++;
		}
	}else{
		string str2(str.rbegin(),str.rend());
		forn(i,N)
			str2[i]=((str2[i]=='(')?')':'(');
		//pref[0]=(str[0]=='(');
		//suf[N-1]=(str[N-1]==')');
		ok1[0]=ok2[N]=true;
		forn(i,N){
			pref[i+1]=((str[i]=='(')?1:-1)+pref[i];
			ok1[i+1] = ok1[i]&(pref[i+1]>=0);
			suf[N-i-1]=((str2[i]=='(')?1:-1)+suf[N-i];
			ok2[N-i-1] = ok2[N-i]&(suf[N-i-1]>=0);
		}
		// mirror -> i = N-1-i
		forn(i,N){
			if(!ok1[i] or !ok2[i+1])
				continue;
			if(str[i]==')' and pref[i]+1==suf[i+1]) out++;
			if(str[i]=='(' and pref[i]>0 and pref[i]-1==suf[i+1]) out++;
		}
	}
	cout << out << '\n';
	
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
