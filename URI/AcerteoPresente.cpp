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
string str,s1,s2,s3;

int main(){
	cin >> T;
	map<string, vector<string> > M;
	while(T--){
		vector<string> A;
		cin >> str >> s1 >> s2 >> s3;
		A.pb(s1);A.pb(s2);A.pb(s3);
		M[str]=A;
	}
	while(cin >> s1 >> s2){
		bool exist=false;
		for(map<string, vector<string> >::iterator it=M.begin();it!=M.end();it++)
			if(it->f==s1){
				exist=true;
				vector<string> A=it->s;
				bool flag = false;
				REP(i,A.size())
					if(A[i]==s2){
						flag=true;
						cout << "Uhul! Seu amigo secreto vai adorar o/\n";
						break;
					}
				if(!flag) cout << "Tente Novamente!\n";
				break;
			}
		if(!exist) cout << "Tente Novamente!\n";
	}
}
