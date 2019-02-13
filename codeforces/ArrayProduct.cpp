#include<bits/stdc++.h>
using namespace std;

#define int long long
main(){
	int X,cont=0;
	scanf("%lld",&X);
	vector< int > A(X),N,Z,P;
	for(int i=0;i<X;i++){
		scanf("%lld",&A[i]);
		if(A[i]==0) Z.push_back(i);
		else if(A[i]<0) N.push_back(i);
		else P.push_back(i);
	}
	if((int)Z.size()==X){
		for(int i=1;i<(int)Z.size();i++)
			printf("1 %lld %lld\n",Z[i-1]+1,Z[i]+1);
		return 0;
	}
	if((int)Z.size()>1){
		for(int i=(int)Z.size()-1;i>0;i--)
			printf("1 %lld %lld\n",Z[i]+1,Z[i-1]+1),cont++;
	}
	if((int)N.size()%2==1 and (int)Z.size()){
		int x=INT_MIN;
		int k=-1;
		for(int i=0;i<(int)N.size();i++)
			if(A[N[i]]>x)
				x=A[N[i]],k=i;
		printf("1 %lld %lld\n",N[k]+1,Z[0]+1),cont++;
		N.erase(N.begin()+k);
		if(cont<(X-1))
		printf("2 %lld\n",Z[0]+1);
	}else if((int)N.size()%2==0 and (int)Z.size()){
		printf("2 %lld\n",Z[0]+1);
	}
	if((int)N.size()%2==1){
		int x=INT_MIN;
		int k=-1;
		for(int i=0;i<(int)N.size();i++)
			if(A[N[i]]>x)
				x=A[N[i]],k=i;
		printf("2 %lld\n",N[k]+1);
		N.erase(N.begin()+k);	
	}
	for(int i=1;i<(int)N.size();i++)
		printf("1 %lld %lld\n",N[i-1]+1,N[i]+1);
	if((int)N.size() and (int)P.size())
		printf("1 %lld %lld\n",N[(int)N.size()-1]+1,P[0]+1);
	for(int i=1;i<(int)P.size();i++)
		printf("1 %lld %lld\n",P[i-1]+1,P[i]+1);
}
