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

ii check(int sz,int col){
	if(sz/col+(sz%col!=0)<=5){
		int row =sz/col+(sz%col!=0);
		if(col*row-sz<=row)
			return {row,col};
	}
	return {inf,inf};
}

int32_t main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string str;
	cin >> str;
	int sz = (int)str.size();
	if(sz<=20){
		cout << "1 " << sz << '\n';
		cout << str << '\n'; 
	}else{
		//    row col
		ii a={inf,inf}; 
		fora(i,2,20){
			ii k = check(sz,i);
			if(a.f>k.f or (a.f==k.f and a.s>k.s))
				a=k;
		}
		int x = a.f*a.s-sz,k=0;
		cout << a.f << " " << a.s << '\n';
		forn(i,a.f){
			bool f=false;
			forn(j,a.s){
				if(!f and j and x){
					cout << "*";
					x--;
					f=true;
				}else
					cout << str[k++]; 
			}
			cout << '\n';
		}  
	}
	
			
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
