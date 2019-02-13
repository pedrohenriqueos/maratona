#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,T,F,K,saida=0;
	cin >> N >> T >> F >> K;
	int dist1=(N+(N-F))-F,dist2=(N*2+F)-(N+(N-F));
	int tanq = T-F;
	if(K==1){
		bool flag=false;
		if(tanq<0){
			flag=true;
			cout << "-1\n";
		}
		if(tanq<(N-F)){
			tanq=T;
			saida++;
		}
		tanq-=(N-F);
		if(!flag){
		if(tanq<0)
			cout << "-1\n";
		else
			cout << saida << '\n';
		}
	}else{
	for(int k=0;k<K-1;k++){
		if(k%2==0){
			if(k>0)
				tanq-=dist2;
			//cout << dist2 << " " << tanq << '\n';
			if(tanq<0)
				break;
			if(dist1>tanq){
				//cout << "+1*1" << '\n';
				tanq=T;
				saida++;
			}
		}
		if(k%2==1){
			tanq-=dist1;
			//cout << dist1 << " " << tanq << '\n';
			if(tanq<0)
				break;
			if(dist2>tanq){
				//cout << "+1*2" << '\n';
				tanq=T;
				saida++;
			}
		}
	}
	if(K%2==0)
		tanq-=dist1;
	else
		tanq-=dist2;
	//cout << tanq << '\n';	
	if(tanq>=0){
	//cout << t << "*\n";
	if(tanq<F){
		tanq=T;
		saida++;
	}
	}
	if(tanq<0)
		cout << "-1\n";
	else
		cout << saida << '\n';
	}
}
