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
string str;

int main(){
	while(cin >> N >> D){
		if(N==0 and D==0) break;
	int remove=D;
	stack<char> p;
	int k=-1;	
	cin >> str;
	p.push(str[0]);
	FOR(i,1,(int)str.size()){
		while(!p.empty() and p.top()<str[i]){
			D--;
			p.pop();
			if(D==0) break;
		}
		p.push(str[i]);
		if(D==0){
			k=i+1;
			break;
		}
	}
	if(k!=-1)
	FOR(j,k,str.size())
		p.push(str[j]);
	string saida="";
	while(!p.empty()){
		saida+=p.top();
		p.pop();
	}
	reverse(all(saida));
	int cont=0;
	REP(i,saida.size()){
		cout << saida[i];
		cont++;
		if(cont==(N-remove)) break;
	}
	cout << '\n';
	}
}
