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
	string str;
	cin >> str;
	char x='a';
	int a=0,b=0,c=0;
	bool flag=true;
	for(auto &c1:str){
		if(c1==x and x=='a')
			a++;
		else if(c1==x and x=='b')
			b++;
		else if(c1==x and x=='c')
			c++;
		else if(c1!=x and x=='a' and c1=='b'){
			b++;
			x=c1;
		}else if(c1!=x and x=='b' and c1=='c'){
			c++;
			x=c1;
		}else{
			flag=false;
			break;
		}
	}
	if(flag and (a==c or b==c) and a and b and c)
		cout << "YES\n";
	else
		cout << "NO\n";
}

