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
	
	string str1,str2;
	cin >> str1 >> str2;
	
	if((int)str1.size()==(int)str2.size()){
		forn(i,(int)str1.size())
			if(str1[i]!=str2[i])
				return cout << (int)str1.size() << '\n',0;
	}else{
		return cout << max((int)str2.size(),(int)str1.size()) << '\n',0;
	}
	cout << "-1\n";
	
	
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
