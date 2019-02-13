#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	while(cin >> N){
		int size,saida=0,d[61],e[61];
		char tam;
		for(int i=0;i<61;i++)
			d[i]=e[i]=0;
		for(int i=0;i<N;i++){
			cin >> size >> tam;
			(tam=='E') ? e[size]++ : d[size]++;
		}
		for(int i=0;i<61;i++){
			if(e[i]>0 and d[i]>0)
				if(e[i]>d[i])				
					saida+=d[i];
				else
					saida+=e[i];
		}
		cout << saida <<'\n';
	}
}
