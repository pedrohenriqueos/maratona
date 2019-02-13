#include<bits/stdc++.h>
using namespace std;

int main(){
	int P1,C1,P2,C2;
	cin >> P1 >> C1 >> P2 >> C2;
	if(P1*C1==P2*C2)
		printf("0\n");
	else if(P1*C1>P2*C2)
		printf("-1\n");
	else
		printf("1\n");
}
