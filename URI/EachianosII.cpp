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

int T;

int main(){
	cin >> T;
	string str,busca;
	while(T--){
		vi S;
		cin.ignore();
		getline(cin,str);
		cin >> busca;
		//cout << str << '\n';
		REP(i,str.size()){
			if(str[i]==busca[0] and (((i-1)>=0 and str[i-1]==' ')or((i-1)==-1))){
				int aux=i+1;
				FOR(j,1,busca.size()){
					if(str[aux]==busca[j])
						aux++;
					else break;
				}
				if((aux-i)==busca.size() and ((str.size()>aux and str[aux]==' ')or(str.size()==aux)))
					S.pb(i);
			}
		}
		if(S.size()==0) cout << "-1";
		REP(i,S.size()){
			if(i!=0)
				cout << " ";
			cout << S[i];
		}
		cout << '\n';
	}
}
