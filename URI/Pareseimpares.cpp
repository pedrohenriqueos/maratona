#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,a;
	cin >> N;
	int Par[N],Imp[N],topoP=0,topoI=0;
	while(N--){
		cin >> a;
		if(a%2==0)
			Par[topoP++]=a;
		else
			Imp[topoI++]=a;
	}
	sort(Par,Par+topoP);//MsergeSort
	sort(Imp,Imp+topoI);//MergeSort
	reverse(Imp,Imp+topoI);//Inverte a ordem
	for(int i=0;i<topoP;i++)
		cout << Par[i] << '\n';
	for(int j=0;j<topoI;j++)
		cout << Imp[j] << '\n';
}
