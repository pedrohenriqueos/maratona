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

int main(){
	string str;	
	cin >> str;
	int saida=0;
	REP(i,str.size()){
		if(str[i]=='Q' and i<(str.size()-2))
			FOR(j,i+1,str.size())
				if(str[j]=='A' and j<(str.size()-1))
					FOR(k,j+1,str.size())
						if(str[k]=='Q') saida++;
	}
	cout << saida;
}
