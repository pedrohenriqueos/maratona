#include<bits/stdc++.h>
using namespace std;

#define pi acos(-1)

int main(){
	double N,A,B,C,s=0.0;
	cin >> N >> A >> B >> C;
	for(int i=0;i<N;i++){
		double u;
		cin >> u;
		s+=((4.0*pi*(u*u*u))/3.0);
	}
	int resp =s/(A*B*C);
	cout << resp << '\n';
}
