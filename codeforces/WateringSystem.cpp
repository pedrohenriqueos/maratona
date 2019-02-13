#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,A;
	double sum=0.0,s,B;
	scanf("%d %d %lf",&N,&A,&B);
	vector<int> V(N-1);
	scanf("%lf",&s);
	for(auto &a:V) scanf("%d",&a),sum+=a;
	sum+=s;
	sort(V.begin(),V.end());
	int resp=0,id=V.size()-1;
	s*=A;
	while(((s/sum)<B)){
		sum-=V[id--];
		resp++;
	}
	printf("%d\n",resp);
}
