#include<bits/stdc++.h>
using namespace std;

class Dados{
	public:
		int T,D;
		Dados(int T,int D){
			this->T=T;
			this->D=D;
		}
};

bool comp(Dados a,Dados b){
	return a.D<b.D;
}

int main(){
	int N;
	cin >> N;
	list<Dados> A;
	for(int n=0;n<N;n++){
		int X,Y;
		cin >> X >> Y;
		Dados d = Dados(X,Y);
		A.push_front(d);
	}
	A.sort(comp);
	list<Dados>::iterator it;
	int s=0,saida=0;
	for(it=A.begin();it!=A.end();it++){
		if((s+(it->T)-(it->D))>saida){
		saida = s+(it->T)-(it->D);
		}
		s+=(it->T);
	}
	cout << saida << '\n';
}
