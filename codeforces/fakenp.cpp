#include<bits/stdc++.h>
using namespace std;

int A[10];

int main(){
	long long int N,M;
	cin >> N >> M;
	long long int X = M-N;
	long long int maxn=N,minn=N%10,maxm=M,minm=M%10,maxx=X;
	if(N>=10000)
		maxn/=10000;
	if(M>=10000)
		maxm/=10000;
	if(X>=10000)
		maxx/=10000;
	while(maxm>=10 or maxn>=10 or maxx>=10){
		if(maxm>=10)
		maxm/=10;
		if(maxn>=10)
		maxn/=10;
		if(maxx>=10)
		maxx/=10;
	}
	cout << minn << " " << maxn << " " << minm << " " << maxm << " " << maxx << '\n';
	if(minn-(maxx-1)>=0){
		for(int i=maxn;i<=maxm;i++)
			A[i]++;
	}else
		for(int i=maxm;i<=maxn;i++){
			if(maxm==10)
				maxm=0;
			A[i]++;
		}
	for(int i=0;i<10;i++)
		cout << A[i] << " ";
	int s=0,c=0;
	for(int i=0;i<10;i++)
		if(A[i]>c){
			c=A[i];
			s=i;
		}
	cout << s << '\n';	
}
