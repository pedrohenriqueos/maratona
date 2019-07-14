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

int t,n;
char in[52];
int v[1002];


int32_t main(){
	int cas=1;
	scanf("%d",&t);
	while(t--){
		memset(v,0,sizeof v);
		scanf("%d",&n);
		vector<string> A(n);
		int m=0,out=0;
		for(int i=0;i<n;i++){
			scanf(" %s",in);
			A[i] = in;
			reverse(all(A[i]));
		}
		sort(all(A));
		do{
			//for(int i=0;i<n;i++)
				//cout << A[i] << '\n';
			//cout << '\n';
			set<string> s;
			for(int i=1;i<n;i++){
				string aux="",val="";
				for(int j=0;j<min((int)A[i].size(),(int)A[i-1].size());j++){
					if(A[i][j]==A[i-1][j]){
						aux+=A[i][j];
						if(s.find(aux)==s.end())
							val = aux;
					}else{
						break;
					}	
				}
				if(val!=""){
					s.insert(val);
					i++;
				}
			}
			mmax(out,(int)s.size());
		}while(next_permutation(all(A)));
		printf("Case #%d: %d\n",cas++,out*2);
	}
		
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}



















