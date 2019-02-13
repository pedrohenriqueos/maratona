#include<bits/stdc++.h>
using namespace std;
#define int long long
main(){
	int N;
	scanf("%lld",&N);
	int aux=N-1,quant=0;
	while(aux>0){
		aux/=10;
		quant++;
	}
	//cout << quant << '\n';
	vector<int> A(N);
	for(auto &a:A) scanf("%lld",&a);
	sort(A.begin(),A.end());
	int at=A[N-1]-A[0],cont1=0,cont2=0;
	for(int i=N-1;i>=0;i--)
		if(A[i]==A[N-1]) cont1++; else break;
	for(int i=0;i<N;i++)
		if(A[i]==A[0]) cont2++; else break;
	if(A[N-1]==A[0]){
		cout << "0 ";
		cout << fixed << setprecision(0) << (((N-1)*(A[0]))/pow(10,quant-2)) << '\n'; 
	}else{
		cout << A[N-1]-A[0] << " " << cont1*cont2 << '\n';
	}
}
