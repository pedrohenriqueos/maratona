#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi 3.14159265358979323846264338327950288
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

int N,D;

int main(){
	cin >> N >> D;	
	int atual=0,saida=0;
	string str;
	cin >> str;
	while(atual!=(N-1)){
		if((atual+D)>=(N-1)){
			saida++; break;
		}
		bool flag=false;
		FORI(i,atual+D,atual+1)
			if(str[i]=='1'){
				flag=true;
				atual=i,saida++;
				break;	
			}
		if(!flag){
			saida=-1;
			break;
		}
	}
	cout << saida;
}
