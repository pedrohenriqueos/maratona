#include<bits/stdc++.h>
using namespace std;

clock_t ini,fim;
int main(){
	double decorrido;
	ini=clock();
	int t=1;
	for(int i=0;i<=1e4;i++)
		t+=i;
	cout << t << '\n';
	fim=clock();
	decorrido = ((double)(fim-ini))/(CLOCKS_PER_SEC);
	cout << decorrido << '\n';
}
