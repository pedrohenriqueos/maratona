#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	vector<string> A(N);
	vector< vector< char > > M;
	for(auto &a:A){
		int v[30];
		memset(v,0,sizeof v);
		cin >> a;
		vector< char > Aux;
		int quant=0;
		for(int i=0;i<a.size();i++)
			if(!v[(int)(a[i]-'a')]){
				quant++;
				v[(int)(a[i]-'a')]=1;
				Aux.push_back(a[i]);	
			}
		bool add=true;
		for(int i=0;i<M.size();i++){
			bool flag=true;
			int quantp=quant;
			for(char k:M[i]){
				if(!v[(int)(k-'a')]){
					flag=false;
					break;
				}else
					quantp--;
			}
			if(flag and !quantp){
				add=false;
				break;
			}
		}
		if(add){
			M.push_back(Aux);
		}
	}
	cout << M.size() << '\n';
}
