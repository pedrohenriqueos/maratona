#include<bits/stdc++.h>
using namespace std;

int main(){
	double D,VF,VG;
	while(scanf("%lf %lf %lf",&D,&VF,&VG)!=EOF){
		double dist=sqrt(D*D+12.0*12.0);
		double tv=dist/VG;
		double tf=12.0/VF;
		if(tf>=tv) puts("S");
		else puts("N");
	}

}
