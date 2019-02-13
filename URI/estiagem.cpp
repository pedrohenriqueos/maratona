#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,quant=1;
	while(cin >> N){
	if(N==0)break;
	int totalx=0,totaly=0,X,Y;
	map<int,int> D;
	for(int n=0;n<N;n++){
		cin >> X >> Y;
		totalx+=X;
		totaly+=Y;
		pair<map<int,int>::iterator,bool> r;
		r = D.insert(pair<int,int>(Y/X,X));
		if(r.second==false)
			D[Y/X]+=X;
	}
	cout << "Cidade# " << quant++ << ":\n";
	map<int,int>::iterator it;
	for(it=D.begin();it!=D.end();it++)
		cout << it->second << "-" << it->first << " "; 
	cout << "\nConsumo medio: " << fixed << setprecision(2) << floor(100 * (float)totaly/totalx) / 100 << " m3." <<'\n';	
	}
}
