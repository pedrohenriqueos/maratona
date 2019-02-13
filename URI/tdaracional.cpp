#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int i=0;i<N;i++){
		int N1,N2,D1,D2;
		char X,Y,Z;
		cin >> N1 >> X >> D1 >> Y >> N2 >> Z >> D2;
		if(Y=='+'){
			N1 = N1*D2+N2*D1;
			D1 = D1*D2;	
		}else if(Y=='-'){
			N1 = N1*D2-N2*D1;
			D1 = D1*D2;
		}else if(Y=='*'){
			N1 = N1*N2;
			D1 = D1*D2;
		}else{
			N1 = N1*D2;
			D1 = N2*D1;
		}
		int d=1;
		if(N1>D1)
			for(int k=2;k<=N1;k++){
				if(N1%k==0 and D1%k==0)
					d=k;
			}
		else
			for(int k=2;k<=D1;k++){
				if(N1%k==0 and D1%k==0)
					d=k;
			}
		cout << N1 << X << D1 << " = " << N1/d << Z << D1/d << '\n';
	}


}
