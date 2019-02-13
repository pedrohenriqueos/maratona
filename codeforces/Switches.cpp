#include<bits/stdc++.h>
using namespace std;


inline bool check(vector<int> &L){
	for(int i=1;i<(int)L.size();i++)
		if(L[i]==1)
			return false;
	return true;
}
inline void pr(vector<int> &L){
	for(int i=1;i<(int)L.size();i++)
		cout << L[i] << " ";
	cout << '\n';
}
int main(){
	int N,M,x;
	scanf("%d %d",&N,&M);
	vector<int> L(M+1,0);
	scanf("%d",&x);
	vector<int> X(x);
	for(auto &a:X)
		scanf("%d",&a),L[a]=1;
	
	vector<int> S[N];
	for(int i=0;i<N;i++){
		int p,a;
		scanf("%d",&p);
		for(int j=0;j<p;j++){
			scanf("%d",&a);
			S[i].push_back(a);	
		}
	}
	int cont=0;
	for(int n=0;n<2;n++){
		for(int i=0;i<N;i++){
			cont++;
			for(auto &s:S[i])
				L[s]^=1;
			//pr(L);
			if(check(L))
				return !printf("%d\n",cont);
		}
	}
	puts("-1");
}
