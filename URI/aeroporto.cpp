#include <bits/stdc++.h>
using namespace std;

int main(){
	int A,V,test=1;
	while(cin >> A >> V){
		if(A==0 and V==0)
			break;
	list <int> cont[A];
	int Control[A];
	for(int c=0;c<A;c++)
		Control[c]=0;
	for(int i =0;i<V;i++){
		int a,b;
		cin >> a >> b;
		if(find(cont[a-1].begin(),cont[a-1].end(),b-1)!= cont[a-1].end())
			Control[b-1]++;
		cont[a-1].push_back(b-1);
	}
	for(int j=0;j<A;j++){
		int quant=0;                                                          
      	for(int i=0;i<A;i++)
        	if(i!=j)
        		if(find(cont[i].begin(),cont[i].end(),j)!= cont[i].end())
        			quant++;
		Control[j] += quant;
		Control[j] += cont[j].size();
   	}
	int maior = 0,S[A],k=0;
	for(int c=0;c<A;c++){
		if(Control[c]==maior){
		S[k]=c;
		k++;
		}
		if(Control[c]>maior){
			k=0;
			maior = Control[c];
			S[k]= c;
			k++;
		}	
	}
	if(test!=1)
		cout << '\n';
	cout << "Teste " << test << '\n';
	for(int d=0;d<k;d++){
		cout << S[d]+1;
		if(d!=k-1)
			cout << " ";
		else
			cout << '\n';
	}
	test++;
	}
}
