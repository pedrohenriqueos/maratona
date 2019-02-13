#include<bits/stdc++.h>
using namespace std;
int main(){
	int A,B,C,D,saida=-1;
	cin >> A >> B >> C >> D;
	for(int i=2;i<=sqrt(C);i++)
		if((i*A)%B!=0 and C%(i*A)==0 and D%(i*A)!=0){
			saida = i*A;
			break;
		}
	cout << saida << '\n';
}
