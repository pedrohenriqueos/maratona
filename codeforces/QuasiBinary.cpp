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

int v[10];

bool check(vi &A){
	REP(i,A.size())
		if(A[i]>0)
			return true;
	return false;
}

int main(){
	string str;
	cin >> str;
	int maxs=0;
	vi A(str.size());
	REP(i,str.size()){
		int a=(int)(str[i]-'0');
		A[i]=a;
		maxs=max(a,maxs);
	}
	
	cout << maxs << '\n';
	while(check(A)){
		string s1;
		REP(i,A.size()){
			if(A[i]!=0){
				s1+='1';
				A[i]--;
			}else{
				s1+='0';
			}
		}
		bool im=false;
		REP(i,s1.size()){
			if(s1[i]=='1')
				im=true;
			if(im)
				cout << s1[i];
		}
		cout << " ";
	}
}
