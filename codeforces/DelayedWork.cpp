#include<bits/stdc++.h>
using namespace std;

int main(){
	double K,P,X,out=INT_MAX;
	cin >> K >> P >> X;
	for(double i=1;i<=1e7;i++){
		double D = K/i;
		out=min(out,D*P+X*i);
	}
	cout << fixed << setprecision(3) << out << '\n';
}
