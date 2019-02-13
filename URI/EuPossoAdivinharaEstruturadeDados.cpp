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

int T,a,b;

int main(){
	while(cin >> T){
		queue<int> q;
		priority_queue<int> pq;
		stack<int> s;
		bool qu=true,pri=true,sta=true;
		while(T--){
			cin >> a >> b;
			if(a==1){
				if(qu)
					q.push(b);
				if(pri)
					pq.push(b);
				if(sta)
					s.push(b);
			}else{
				if(q.empty()) qu=false;
				if(pq.empty()) pri=false;
				if(s.empty()) sta=false;
				if(qu){
					if(q.front()==b)
						q.pop();
					else
						qu=false;
				}
				if(pri){
					if(pq.top()==b)
						pq.pop();
					else
						pri=false;
				}
				if(sta){
					if(s.top()==b)
						s.pop();
					else
						sta=false;
				}
			}
		}
		cout << ((!qu and !pri and !sta)?"impossible\n":(qu and !pri and !sta)?"queue\n":(!qu and pri and !sta)?"priority queue\n":(!qu and !pri and sta)?"stack\n":"not sure\n");
			
	}
}
