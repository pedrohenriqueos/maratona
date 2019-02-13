#include<bits/stdc++.h>

using namespace std;

int main(){
	int N;
	cin >> N;
	vector<long long> A(N);
	for(long long &a:A) cin >> a;
	pair<int,int> saida=make_pair(INT_MAX,1);
	for(int i=0;i<N;i++){
		long long j=0,k=A[i],m,resp=INT_MAX;
		while(j<=k){
			m=(j+k)/2;
			if((i+N*m)>=A[i]){
				resp=min(resp,m);
				k=m-1;
			}else
				j=m+1;
		}
		if(saida.first>resp)
			saida=make_pair(resp,i+1);
	}
	cout << saida.second << '\n';
}
