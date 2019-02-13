#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int A,B,C,D;
	bool p1=false,p2=false,ip1=false,ip2=false;
	cin >> A >> B;
	cin >> C >> D;
	if(B!=D){
	((A+B)%2==0) ? p1=true : ip1=true;
	((A*2+B)%2==0) ? p1=true : ip1=true;
	((C+D)%2==0) ? p2=true : ip2=true;
	((C*2+D)%2==0) ? p2=true : ip2=true;
	if((p1 and p2)or(ip1 and ip2)){
	long long int a=2,b=2;
	long long int aux1=A+B,aux2=C+D;
	while(aux1!=aux2){
		if(aux1<aux2){
			aux1 = A*a+B;
			a++;
		}	
		if(aux1==aux2)
			break;
		if(aux2<aux1){
			aux2 = C*b+D;
			b++;
		}
	}
		cout << aux1 << '\n';
	}else
		cout << "-1\n";
	}else
		cout << B << '\n';
}
