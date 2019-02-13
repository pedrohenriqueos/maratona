//Com auxilio
#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi acos(-1)
#define f first
#define s second
#define pb push_back
#define all(a) a.begin(),a.end()
#define db(a) cerr << #a << " = " << a << '\n';
#define _ << " , " << 

typedef pair<int,int> ii;
typedef pair<int, ii> iii;

int N=1002;
ii p[3],mid;
set<ii> s;
inline void solve(int i){
	int x=p[i].f,y=p[i].s;
	s.insert({x,y});
	for(;x<mid.f;x++)
		s.insert({x,y});
	for(;x>mid.f;x--)
		s.insert({x,y});
	for(;y<mid.s;y++)
		s.insert({x,y});
	for(;y>mid.s;y--)
		s.insert({x,y});
}
int32_t main(){
	for(int i=0;i<3;i++)
		cin >> p[i].f >> p[i].s;
	int d=inf;
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++){
			int d1=abs(p[0].f-i)+abs(p[0].s-j)+abs(p[1].f-i)+abs(p[1].s-j)+abs(p[2].f-i)+abs(p[2].s-j);
			if(d>d1)
				d=d1,mid={i,j};
		}
	s.insert({mid.f,mid.s});
	for(int i=0;i<3;i++)
		solve(i);
	cout << (int)s.size() << '\n';
	for(auto it=s.begin();it!=s.end();it++)
		cout << (*it).f << " " << (*it).s << '\n';
}



















