#include <bits/stdc++.h>
using namespace std;

int main(){
	long int N,A,D,H;
	bool saida=false;
	cin >> N >> A >> D >> H;
	long int X[N],Y[N],Z[N];
	for(int n=0;n<N;n++)
		cin >> X[n] >> Y[n] >> Z[n];
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++)
			if(i!=j and X[i]+X[j]==A and Y[i]+Y[j]==D and Z[i]+Z[j]==H){
				saida = true;
				break;
			}
		if(saida)
			break;
	}
	(saida) ? cout << "Y\n" : cout << "N\n";
}
