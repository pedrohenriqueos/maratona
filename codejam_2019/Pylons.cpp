#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi acos(-1)
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(),a.end()
template<class T> bool mmin(T &a,T b){return (a>b ?(a=b,true):false);};
template<class T> bool mmax(T &a,T b){return (a<b ?(a=b,true):false);};

int t,n,m;
int Mat[22][22],cor[22][22];
vector<pair<int,int>> ans;
bool dp(int x,int y,int k){
	if(k==(n*m)) return true;
	bool fl=false;
	for(int i=0;i<n and !fl;i++)
		for(int j=0;j<m and !fl;j++){
			if(i==x or j==y or abs(x-y)==abs(i-j) or (x+y)==(i+j) or cor[i][j])
				continue;
			else{
				cor[i][j] = 1;
				fl = dp(i,j,k+1);
				cor[i][j] =0;
				if(fl)
					ans.pb({i,j});
			}
		}
	return fl;
}

int32_t main(){
	int cas=1;
	scanf("%d",&t);
	while(t--){
		ans.clear();
		scanf("%d %d",&n,&m);
		bool flag=false;
		for(int i=0;i<n and !flag;i++)
			for(int j=0;j<m and !flag;j++){
				memset(cor,0,sizeof cor);
				cor[i][j] =1;
				bool k = dp(i,j,1);
				ans.pb({i,j});
				if(k)
					flag=true;
			}
				
					
		printf("Case #%d: ",cas++);
		if(!flag){
			printf("IMPOSSIBLE\n");
		}else{
			printf("POSSIBLE\n");
			for(auto &a:ans)
				printf("%d %d\n",a.fi+1,a.se+1);
		}
	}
		
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}



















