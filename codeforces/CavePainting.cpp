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

string s1,s2;
int main(){
	cin >> s1 >> s2;
	if(s1.size()==s2.size()){
		int x=s1.size()-1;
		int cont=0;
		for(int k=s2.size()-1;k>=0;k--,x--){
			if(s2[k]>s1[x]){
				cout << "No\n";
				return 0;
			}else if(s2[k]<s1[x]){
				cout << "Yes\n";
				return 0;
			}
		}
		cout << "No\n";
		return 0;
	}else{
		cout << "Yes\n";
	}
}
