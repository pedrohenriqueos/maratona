#include<bits/stdc++.h>
using namespace std;

int main(){
	double v[5],saida=0.0;
	for(int i=0;i<5;i++)
		cin >> v[i];
	sort(v,v+5);
	for(int i=1;i<4;i++)
		saida+=v[i];
	cout << fixed << setprecision(1) << saida << '\n';
}
