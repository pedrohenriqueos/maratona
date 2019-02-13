#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define f first
#define s second
#define all(a) a.begin(),a.end()
#define inf 0x3f3f3f3f

bool cmp( pair<int,int> a, pair<int,int> b){
	return a.f==b.f? a.s>b.s: a.f<b.f;
}

int32_t main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int x=0;
	vector<pair<int,int>> A(n);
	vector<pair<int,int>> D;
	map<int,int> Map;
	for(int i=0;i<n;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		A[i]={a,b};
		D.pb({a,1}),D.pb({b,-1});
	}
	sort(all(D),cmp);
	x=0;
	vector<pair<int,int>> ans;
	for(int i=0;i<(int)D.size();i++){
		//cout << x << " " << Map[D[i]] << '\n';
		if(x+D[i].s==k and x<k){
			ans.pb({D[i].f,D[i].f});
		}else if(x+D[i].s<k and x==k){
			ans[(int)ans.size()-1].s = D[i].f;
		}
		x+=D[i].s;
	}
	//D.resize(unique(all(D))-D.begin());
	/*sort(all(A));
	for(auto &a:D)
		Map[a]=x++;
	D.pb(inf);
	vector<int> pref(x+1,0);
	for(int i=0;i<n;i++){
		pref[Map[A[i].f]]++;
		pref[Map[A[i].s]+1]--;
		//cout << A[i].f << " " << Map[A[i].f] << " " << A[i].s << " " << Map[A[i].s]+1 << '\n';
	}
	vector<pair<int,int>> ans;
	int save=1;
	for(int i=1;i<=x;i++)
		pref[i]+=pref[i-1];
	bool fl=true;
	for(int i=0;i<x;i++){
		
	}
	*/
	printf("%d\n",(int)ans.size());
	for(int i=0;i<(int)ans.size();i++){
		printf("%d %d\n",ans[i].f,ans[i].s);
	}
}
