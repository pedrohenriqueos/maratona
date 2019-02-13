#include<bits/stdc++.h>
using namespace std;

int val[102];
int main(){
	int N,a,quant=0;
	cin >> N;
	while(N--){
		cin >> a;
		if(val[a]==0)
			quant++;
		val[a]++;
	}
	if(quant==2){
		pair<int,int> vet[2];
		int j=0;
		for(int i=1;i<=100;i++)
			if(val[i]!=0){
				vet[j].first=val[i];
				vet[j].second=i;
				j++;
			}		
		if(vet[0].first!=vet[1].first)
			cout << "NO\n";
		else{
			cout << "YES\n";
			cout << vet[0].second << " " << vet[1].second << '\n';
		}
	}else
		cout << "NO\n";
}
