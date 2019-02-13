#include<bits/stdc++.h>
using namespace std;

int N,vet[10];

int main(){
	int a,saida=0;
	cin >> N;
	while(N--){
		cin >> a;
		vet[a]++;
	}
	saida+=vet[4];
	vet[4]=0;
	if(vet[2]%2==0){
		saida+=(vet[2]/2);
		vet[2]=0;
	}else{
		saida+=(vet[2]-1)/2;
		vet[2]=1;
	}
	if(vet[2]==1){
		if(vet[1]>=2)
			vet[1]-=2;
		else if(vet[1]==1)
			vet[1]--;
		saida++;
		vet[2]=0;
	}
	int k=min(vet[3],vet[1]);
	saida+=k;
	vet[1]-=k;
	vet[3]-=k;
	if(vet[1]%4==0){
		saida+=(vet[1]/4);
	}else
		saida+=(int)(vet[1]/4)+1;
	saida+=vet[3];
	cout << saida << '\n';
}
