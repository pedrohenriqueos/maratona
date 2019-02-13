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

int dp[2002][2002];

int32_t main(){
	int N,K;
	cin >> N >> K;
	vector<string> Mat(N);
	for(auto &s:Mat)
		cin >> s;
	dp[0][0] = (Mat[0][0]!='a');
	for(int r=0;r<N;r++)
		for(int c=0;c<N;c++){
			if(!r and !c) continue;
			if(r and c)
				dp[r][c] = min(dp[r-1][c],dp[r][c-1])+(Mat[r][c]!='a');
			else if(r)
				dp[r][c] = dp[r-1][c] + (Mat[r][c]!='a');
			else
				dp[r][c] = dp[r][c-1] + (Mat[r][c]!='a');
		}
	/*for(int r=0;r<N;r++){
		for(int c=0;c<N;c++)
			cout << dp[r][c] << " ";
		puts("");
	}*/
	int ini = 0;
	for(int r=0;r<N;r++)
		for(int c=0;c<N;c++)
			if(dp[r][c]<=K)
				ini=max(ini,r+c+1);
	//cerr << ini << '\n';
	vector<pair<int,int>> list;
	string out(ini,'a');
	for(int r=0;r<N;r++)
		for(int c=0;c<N;c++)
			if(dp[r][c]<=K and r+c+1==ini)
				list.pb({r,c});
	if(list.empty()){
		list.pb({0,0});
		out+=Mat[0][0];
	}
	while(!list.empty()){
		char esc='z';
		vector<pair<int,int>> new_list;
		for(auto ele:list)
			for(auto r:{0,1}){
				int c=1-r;
				if((ele.f+r)<N and (ele.s+c)<N){
					if(Mat[ele.f+r][ele.s+c]<esc)
						new_list.clear(),esc=Mat[ele.f+r][ele.s+c];
					else if(Mat[ele.f+r][ele.s+c]>esc)
						continue;
					new_list.pb({ele.f+r,ele.s+c});
				}
			}
		list=new_list;
		if(list.empty())
			break;
		sort(list.begin(),list.end());
		list.resize(unique(list.begin(),list.end())-list.begin());
		out+=esc;
	}
	cout << out << '\n';
}



















