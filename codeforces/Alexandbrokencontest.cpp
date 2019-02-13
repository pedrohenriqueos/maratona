#include<bits/stdc++.h>
using namespace std;

int main(){
	map<int,string> Nomes;
	Nomes.insert(make_pair(0,"Danil"));
	Nomes.insert(make_pair(1,"Olya"));
	Nomes.insert(make_pair(2,"Slava"));
	Nomes.insert(make_pair(3,"Ann"));
	Nomes.insert(make_pair(4,"Nikita"));
	string N;
	cin >> N;
	int save=0,cont=0;
	for(int i=save;i<N.size();i++){
		int k=0;
		bool flag=false;
		for(int j=0;j<=4;j++){
			save=i,k=0;
			while(Nomes[j][k]==N[i]){
				k++,i++;
				flag=true;
				if(k==Nomes[j].size()){
					cont++;
					break;
				}	
			}			
			i=save;
			if(flag)
				break;
		}
		if(cont==2)
			break;
		i=save;
	}
	cout << ((cont==1)?"YES\n":"NO\n");
}
