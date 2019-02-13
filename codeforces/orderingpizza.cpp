#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int N,S,s,a,b,saida=0;
	cin >> N >> S;
	while(N--){
		cin >> s >> a >> b;
		if(s>S)
			saida+=(a*b);
		else
			saida+=(max(s,a)*b);
	}
	cout << saida << '\n';

}
