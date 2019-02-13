#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi acos(-1)
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define FORI(i,a,n) for(int i=a;i>=n;i--)
#define REP(i,n) FOR(i,0,n)
#define all(a) a.begin(),a.end()

typedef long long ll;
typedef unsigned long long  ull;
typedef vector<int> vi;
typedef vector< ll > vll;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector< ii > vii;
typedef vector< iii > viii;

int main(){
	int N;
	cin >> N;
	bool flag=true;	
	string str;
	cin >> str;
	int x=N/2+N%2,cont=0,cont2=0;
	if(N==1){
		cont=(int)(str[0]-'0');
		cout << ((cont)?"Yes\n":"No\n");
		return 0;
	}
	REP(i,N){
		if(str[i]=='0')
			cont++,cont2=0;
		else{
			cont2++;
			cont=0;
		}
		if(cont==3 or cont2==2){
			flag=false;
			break;
		}
	}
	if(flag)
		cout << "Yes\n";
	else
		cout << "No\n";
}
