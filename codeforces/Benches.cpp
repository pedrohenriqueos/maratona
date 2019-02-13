#include<bits/stdc++.h>
using namespace std;

int main(){
	double N,M;
	scanf("%lf %lf",&N,&M);
	vector<double> A(N);
	double sum=0.0,m=0.0;
	for(auto &a:A)scanf("%lf",&a),sum+=a,m=max(m,a);
	int resp =(int)ceil((sum+M)/N);
	for(auto &a:A) if(resp<(int)a) resp=a;
	printf("%d %d\n",resp,(int)(m+M));
}
