#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,M,cont=0,k,x;
	bool s=true,p=false;
	cin >> N >> M;
	int a,b;
		cin >> a >> b;
	k=a;
	x=b;
	for(int i=1;i<M;i++){
		cin >> a >> b;
		if((k==a or k==b) or (x==a or x==b)){
			cont++;
			p=true;
		}
		if(p and ((k!=a and k!=b) and (x!=a and x!=b)))
			s=false;
		k=a;
		x=b;
	}
	(s and ((cont==0 and !p)or(cont>1))) ? cout << "YES\n" : cout << "NO\n";
}
