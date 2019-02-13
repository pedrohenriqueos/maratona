#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,M,K,X,Y;
	while(cin >> K){
		if(K==0)
			break;
		cin >> N >> M;
		for(int i=0;i<K;i++){
			cin >> X >> Y;
			if(X==N or Y==M)
				cout << "divisa\n";
			else if(X>N)
				if(Y>M)
					cout << "NE\n";
				else
					cout << "SE\n";
			else
				if(Y>M)
					cout << "NO\n";
				else
					cout << "SO\n";
		}
	}
}
