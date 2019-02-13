#include<bits/stdc++.h>
using namespace std;

int Tam[102];
int main(){
	int N,K,total=0;
	cin >> N >> K;
	string str;
	vector<string> S;
	while(N--){
		cin >> str;
		Tam[str.size()]++;
	}
	cin >> str;
	int tamsize=str.size(),save=0,time=0,a=0;
	for(int i=1;i<=tamsize;i++){
		if(i==tamsize)
			a=time+1;
		if(Tam[i]!=0){
			save+=Tam[i];
			time+=Tam[i];
			if(save>K)
				time+=((5*(floor(save/K)))),save-=(K*floor(save/K));
		}
	}
	cout << a << " " << time;
}
