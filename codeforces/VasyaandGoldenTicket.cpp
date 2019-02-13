#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi acos(-1)
#define f first
#define s second
#define pb push_back
#define all(a) a.begin(),a.end()
#define db1(a) cerr << a << '\n'
#define db2(a,b) cerr << a << " " << b << '\n'
#define db3(a,b,c) cerr << a << " " << b << " " << c << '\n'

typedef vector<int> vi;
typedef vector< long long > vll;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector< ii > vii;
typedef vector< iii > viii;

int pd[102][901],A[102],N,s=0;

int32_t main(){
	scanf("%d",&N);
	string str;
	cin >> str;
	for(int i=0;i<N;i++)
		A[i] = (int)(str[i]-'0');
	for(int i = 0;i<(N-1);i++){
		s += A[i];
		int p=0,cont=0;
		bool flag=true;
		for(int j=i+1;j<N;j++){
			p+=A[j];
			if(p==s) {p=0;cont++;}
			else if(p>s){ flag=false;break; }
		}
		if(flag and cont and !p) return !printf("YES\n");
	}
	printf("NO\n");
}






