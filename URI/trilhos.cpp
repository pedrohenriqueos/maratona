#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	while(cin >> N and N){
	int V[N];
	while(cin >> V[0] and V[0]){
		int parada[N];
		for(int i=1;i<N;i++)	
			cin >> V[i];
		int j=N-1,prox=N,ant=N+1,c=0;
		while(j>=0){
			if(c!=0){
				if(parada[c-1]==prox){
					//cout << prox << ' ';
					c--;
					prox--;
					continue;
				}
			}
			if(V[j]<prox){
				parada[c]=V[j];
				j--;
				c++;
			}else if(V[j]==prox){
				j--;
				prox--;
			}
		}
		while(c>0){
			if(parada[c-1]==prox){
			c--;
			prox--;
			}else
				break;
		}
		if(c!=0)
			cout << "No\n";
		else
			cout << "Yes\n";
	}
		cout << '\n';
	}
}
