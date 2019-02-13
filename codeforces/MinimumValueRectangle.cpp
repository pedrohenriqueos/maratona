#include<bits/stdc++.h>
using namespace std;

#define int long long
#define inf 0x3f3f3f3f3f3f3f3f
main(){
	int T,N;
	scanf("%lld",&T);
	while(T--){
		scanf("%lld",&N);
		int V[10002];
		memset(V,0,sizeof V);
		vector<int> A(N);
		vector<double> S;
		pair<int,int> resp;
		for(auto &a:A){
			scanf("%lld",&a),V[a]++;
			if(V[a]==2 or V[a]==4){
				S.push_back(a);
			}
		}
		sort(S.begin(),S.end());
		double v=inf;
		for(int i=1;i<(int)S.size();i++)
			if((((S[i]*2.0+S[i-1]*2.0)*(S[i]*2.0+S[i-1]*2.0))/(S[i]*S[i-1]))<v){
				resp={S[i-1],S[i]};
				v=(((S[i]*2.0+S[i-1]*2.0)*(S[i]*2.0+S[i-1]*2.0))/(S[i]*S[i-1]));

			}
		printf("%lld %lld %lld %lld\n",resp.first,resp.first,resp.second,resp.second);
	}
}
