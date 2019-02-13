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

string str;

bool check(char a,char b,char c){
	string aux="";
	aux+=a;aux+=b;aux+=c;
	if(aux=="ABC" or aux=="BAC" or aux =="ACB" or aux=="BCA" or aux=="CAB" or aux=="CBA")
		return true;
	return false;
}
int main(){
	cin >> str;
	for(int i=2;i<str.size();i++){
		if(check(str[i-2],str[i-1],str[i])){
			cout << "Yes\n";
			return 0;
		}
	}
	cout << "No\n";
}