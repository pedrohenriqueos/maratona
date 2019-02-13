#include<bits/stdc++.h>
using namespace std;
#define f first
#define s second

bool fact(int a,int b){
	for(int i=2;i<=min(a,b);i++)
		if(a%i==0 and b%i==0)
			return false;
	return true;
}
int main(){
	int N;
	cin >> N;
	int x = N/2;
	double v=0.0;
	pair<int,int> saida;
	for(int k=x;k>=1;k--)
		if(k!=(N-k)){
			double a=(double)k/(N-k);
			if(a>v and fact(k,N-k)){
				v=a;
				saida.f=k,saida.s=N-k;
			}
		}
	cout << saida.f << " " << saida.s;
}
