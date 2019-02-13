#include<bits/stdc++.h>
using namespace std;

int main(){
	long long N,M,K;
	cin >> N >> M >> K;
	long long x=1,y=1,quant=0;
	if(K==0){
		cout << x << " " << y << '\n';
		return 0;
	}
	while(K){
		if(quant==0){
			if((K-(N-1))<0){
				y+=K;
				K=0;
			}
			if(K==0){
				cout << y << " " << x << '\n';
				return 0;
			}
			K-=(N-1);
			y=N;
		}else if(quant==1){
			if((K-(M-1))<0){
				x+=K;
				K=0;
			}
			if(K==0){
				cout << y << " " << x << '\n';
				return 0;
			}
			K-=(M-1);
			x=M;
		}else if((K>(1+(M-2)+1+(M-2)))){
			long long quant=K/(1+(M-2)+1+(M-2));
			K%=(1+(M-2)+1+(M-2));
			y-=(2*quant);
			if(K==0){
				cout << y << " " << x << '\n';
				return 0;
			}
			continue;
		}else if(quant%2==0){
			y--;
			K--;
			if(K==0){
				cout << y << " " << x << '\n';
				return 0;
			}
		}else{
			if((K-(M-2))<0){
				if(x==M)
				x-=K;
				else x+=K;
				K=0;
			}
			if(K==0){
				cout << y << " " << x << '\n';
				return 0;
			}
			K-=(M-2);
			if(x==M)
				x=2;
			else x=M;
		}
		if(K==0){
			cout << y << " " << x << '\n';
			return 0;
		}
		quant++;
	}
	cout << x << " " << y << '\n';
}
