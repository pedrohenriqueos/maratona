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

string str1,str2;
int v1[30],v2[30];

bool vogal(char a,char b){
	if((a=='a' or a=='e' or a=='i' or a=='o' or a=='u') and (b=='a' or b=='e' or b=='i' or b=='o' or b=='u'))
		return true;
	if(!(a=='a' or a=='e' or a=='i' or a=='o' or a=='u') and (b=='a' or b=='e' or b=='i' or b=='o' or b=='u'))
		return false;
	if((a=='a' or a=='e' or a=='i' or a=='o' or a=='u') and !(b=='a' or b=='e' or b=='i' or b=='o' or b=='u'))
		return false;
	return true;
}

int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a,b,f,d;
	a=b=f=d=0;
	cin >> str1 >> str2;
	if((int)str1.size()!=(int)str2.size())
		return puts("No");
	for(int i=0;i<(int)str1.size();i++)
		if(!vogal(str1[i],str2[i])){
			return puts("No");
		}
	puts("Yes");
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
