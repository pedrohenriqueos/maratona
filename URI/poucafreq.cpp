#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int i=0;i<N;i++){
		int A;
		cin >> A;
		string Nome[A],Pres[A];
		for(int j=0;j<A;j++)
			cin >> Nome[j];
		for(int j=0;j<A;j++)
			cin >> Pres[j];
		int p,a,prim=0;
		for(int k=0;k<A;k++){
			p=a=0;
			for(char c:Pres[k]){
				if(c=='P')
				p++;
				if(c=='A')
				a++;
			}
			if(a>0.25*(p+a)){
			if(prim>0)
				cout << " ";
				prim=1;
				cout << Nome[k];
			}
		}
		cout << '\n';
	}
}
