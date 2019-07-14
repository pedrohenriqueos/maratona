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

int32_t main(){
	
	int t,cas=1,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		char in[100000];
		scanf(" %s",in);
		string out="";
		for(int i=0;i<(2*n-2);i++)
			if(in[i]=='S'){
				out+='E';
			}else{
				out+='S';
			}
		printf("Case #%d: %s\n",cas++,out.c_str());
	}
	
		
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}
