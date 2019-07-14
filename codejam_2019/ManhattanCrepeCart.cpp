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
	
	int t,n,q,cas=1;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&q);
		int Mat[q+1][q+1];
		memset(Mat,0,sizeof Mat);
		for(int i=0;i<n;i++){
			int x,y;
			char d;
			scanf("%d %d %c",&x,&y,&d);
			if(d=='N'){
				for(int j = 0;j<=q;j++){
					for(int k =y+1;k<=q;k++){
						Mat[j][k]++;
					}
				}
			}else if(d=='S'){
				for(int j = 0;j<=q;j++){
					for(int k =y-1;k>=0;k--){
						Mat[j][k]++;
					}
				}
			
			}else if(d=='E'){
				for(int j = x+1;j<=q;j++){
					for(int k =0;k<=q;k++){
						Mat[j][k]++;
					}
				}
			}else{
				for(int j = x-1;j>=0;j--){
					for(int k =0;k<=q;k++){
						Mat[j][k]++;
					}
				}
			
			}
		}
		pair<int,int> out;
		int cont = 0;
		for(int i=0;i<=q;i++){
			for(int j=0;j<=q;j++){
				//cout << Mat[i][j] << " ";
				if(mmax(cont,Mat[i][j])){
					out = {i,j};
				}
			}
		}
		printf("Case #%d: %d %d\n",cas++,out.fi,out.se);
	}
		
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}



















