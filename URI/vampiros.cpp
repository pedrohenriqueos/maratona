#include <bits/stdc++.h>
using namespace std;

int main(){
	int EV1,EV2,AT,D;
	while(cin >> EV1 >> EV2 >> AT >> D){
	if(EV1==0 and EV2==0 and AT==0 and D==0)
		break;
	double p1 = (double)AT/6;
	double p2 = (double)(6-AT)/6;
	double saida = ((((double)EV1*p1)*100)/(((double)EV1*p1)+((double)EV2*p2)));
	cout << fixed << setprecision(1) << saida << '\n';
	} 
}
