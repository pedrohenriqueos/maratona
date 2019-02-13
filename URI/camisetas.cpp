#include<bits/stdc++.h>
using namespace std;

class Dado{
	public:
		string str,cor;
		char tam;
};

bool ordem(Dado a, Dado b){
	return ((a.cor==b.cor)?((a.tam==b.tam)?a.str<b.str:a.tam>b.tam):a.cor<b.cor);
}

int main(){
	int T,quant=0;
	while(cin >> T and T){
		cin.ignore();
		vector<Dado> saida;
		while(T--){
			Dado s;
			getline(cin,s.str);
			cin >> s.cor >> s.tam;
			saida.push_back(s);
			cin.ignore();
		}
		sort(saida.begin(),saida.end(),ordem);
		if(quant!=0)
			cout << '\n';
		quant++;
		for(int i=0;i<saida.size();i++)
			cout << saida[i].cor << " " << saida[i].tam << " " << saida[i].str << '\n';
	}	
}
