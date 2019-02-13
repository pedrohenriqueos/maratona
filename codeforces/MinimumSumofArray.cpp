#include<bits/stdc++.h>
using namespace std;

int primos[1000001];
inline bool crivo(){
	primos[1]=1;
	for(int i=2;i<=1000000;i++)
		if(!primos[i])
			for(int j=2;i*j<=1000000;j++)
				primos[i*j]=1;
}
inline vector<int> Div(int N){
	vector<int> d;
	for(int x=2;x*x<=N;x++){
		if(N%x==0){
			d.push_back(N/x);
			d.push_back(N/(N/x));
		}
	}
	return d;
}
main(){
	crivo();
	int T;
	scanf("%d",&T);
	while(T--){
		int N;
		long long sum=0;
		set<int> V;
		scanf("%d",&N);
		vector<int> A(N),X;
		for(auto &a:A) scanf("%d",&a),V.insert(a);
		for(int i=0;i<N;i++){
			if(V.find(1)!=V.end()){
				A[i]=1;
				sum+=A[i];
				continue;
			}
			if(!primos[A[i]]){
				sum+=A[i];
				continue;
			}
			vector<int> div=Div(A[i]);
			sort(div.begin(),div.end());
			for(int x=0;x<(int)div.size();x++)
				if(V.find(div[x])!=V.end()){
					A[i]=div[x];
					break;
				}
			sum+=A[i];
		}
		printf("%lld\n",sum);
	}

}
