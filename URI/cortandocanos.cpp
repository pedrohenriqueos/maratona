#include <bits/stdc++.h>
using namespace std;
int N,M,valor[10002],peso[10002],tab[10002][10002];
int PD(int idx,int aguenta){
    if(idx>=N)
        return 0x3f3f3f3f;
    if(tab[idx][aguenta]==-1){
      tab[idx][aguenta]=min(valor[idx]+PD(idx,aguenta-peso[idx]),PD(idx+1,aguenta));
    }
    return tab[idx][aguenta];
}
int main(){
  	cin >> N >> M;
    memset(tab,-1,sizeof(tab));
    for(int i=0;i<N;i++){
        cin >> peso[i] >> valor[i];
	}
    int saida = PD(0,M);
    cout << saida << '\n';
    return 0;
}
