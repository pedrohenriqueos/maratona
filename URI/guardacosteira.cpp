#include<bits/stdc++.h>
using namespace std;

int main(){
	int D,VG,VF;
	while(cin >> D >> VF >> VG){
	if(D>=12)
		cout << "N\n";
	else{
		double t1 = (double)(12-D)/VG;
		double t2 = (double)(12-D)/VF;
		if(t1<t2)
			cout << "S\n";
		else 
			cout << "N\n";
	}
	}
}
