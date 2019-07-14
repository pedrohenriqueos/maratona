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
	
	int t,n,cas=1;
	scanf("%d",&t);
	while(t--){
		char in[102];
		vector<char> a(102,0),b(102,0);
		int ta=0,tb=0;
		scanf(" %s",in);
		string s = in;
		for(int i=0;i<s.size();i++){
			if(s[i]=='4'){
				b[tb++] = '3';
				a[ta++] = '1';
			}else{
				b[tb++] = s[i];
				a[ta++] = '0';
			}
		}
		printf("Case #%d: ",cas++);
		for(int i=0;i<tb;i++)
			printf("%c",b[i]);
		printf(" ");
		bool fl=false;
		for(int i=0;i<ta;i++){
			if(a[i]=='0' and !fl) continue;
			fl=true;
			printf("%c",a[i]);
		}
		printf("\n");
	}
	
		
#ifdef LOCAL_DEFINE
	cerr << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
	return 0;
}





