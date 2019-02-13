#include<bits/stdc++.h>
using namespace std;

vector<int> fatores(int N){
	vector<int> f;
	for(int x=2;(x*x)<=N;x++){
		bool flag=false;
		while(N%x==0){
			if(!flag) f.push_back(x);
			flag=true;
			N/=x;
		}
	}
	if(N>1) f.push_back(N);
	return f;
}

int main(){
	int N;
	scanf("%d",&N);
	vector<int> A(N);
	for(auto &a:A) scanf("%d",&a);
	vector<int> K=fatores(N);
	for(int i=0;i<(int)K.size();i++){
		int F[K[i]];
		memset(F,0,sizeof F);
		for(auto a:A){
			F[a%K[i]]++;
			if(F[a%K[i]]>(N/K[i]))
				break;
		}
		bool flag=true;
		for(int x=0;x<K[i];x++)
			if(F[x]!=(N/K[i])){
				flag=false;
				break;
			}
		if(flag)
			return !printf("%d\n",K[i]);
	}
	printf("-1\n");
}
