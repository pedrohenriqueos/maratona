#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define REP(i,n) FOR(i,0,n)

typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
typedef vector< ii > vii;
typedef vector< iii > viii;

int main(){
	int N,M;
	while(cin >> N >> M){
	if(N==0 and M==0) break;
		string str,saida="";
		cin >> str;
		stack<char> p;
		p.push(str[0]);
		int remove= M;
		int i=1;
		while(remove){
			char u=p.top();
			while(str[i]>u){
				p.pop();
				remove--;
				if(p.empty()) break;
				u=p.top();
				if(!remove) break;
			}
			p.push(str[i]);
			if(!remove) break;
			i++;
		}
		FOR(j,i+1,N) p.push(str[j]);
	
		while(!p.empty()) saida+=p.top(),p.pop();
		reverse(saida.begin(),saida.end());
		int c=0;
		REP(i,saida.size()){
			cout << saida[i];
			c++;
			if(c==(N-M)) break;
		}
		cout << '\n';
	}
}
