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
	string str,out="";
	cin >> str;
	for(int i=0;i<str.size();i++){
		if((i+2)<str.size() and str[i]!=str[i+1] and str[i]!=str[i+2] and str[i+1]!=str[i+2])
			out+='C',i+=2;
		else if(str[i]=='R')
			out+='S';
		else if(str[i]=='B')
			out+='K';
		else
			out+='H';
	}
	cout << out << '\n';
}
