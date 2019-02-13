#include<bits/stdc++.h>
using namespace std;

class Brinquedo{
	public:
		int D,P;
};
bool comp(Brinquedo a,Brinquedo b){
	return (double)a.P/a.D>(double)b.P/b.D;
}

int main(){
	int N,T,inst=0;
	while(cin >> N >> T){
		if(N==0 and T==0) break;
		Brinquedo S[N];
		for(int n=0;n<N;n++)
			cin >> S[n].D >> S[n].P;
		sort(S,S+N,comp);
		int temptotal=0,totalpontos=0,i=0;
		while(i<N){
			int tempaux = temptotal + S[i].D;
			if(tempaux<=T){
				temptotal = tempaux;
				totalpontos += S[i].P;
			}else
				i++;
			if(temptotal==T) break;
		}
		cout << "Instancia " << ++inst << '\n';
		cout << totalpontos << "\n\n";
	}
}
