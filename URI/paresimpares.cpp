#include <bits/stdc++.h>
using namespace std;

bool inverte(int a,int b){
	return a > b;
}

int main(){
	int N;
	cin >> N;
	int Num[N],Par[N],Im[N],p=0,ip=0;
	for(int i=0;i<N;i++){
		cin >> Num[i];
		if(Num[i]%2==0){
			Par[p]=Num[i];
			p++;
		}else{
			Im[ip]=Num[i];
			ip++;
		}
	}
	sort(Par,Par+p);
	sort(Im,Im+ip,inverte);
	for(int i=0;i<p;i++)
		cout << Par[i] << '\n';
	for(int i=0;i<ip;i++)
		cout << Im[i] << '\n';
}
