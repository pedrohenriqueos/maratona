#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	cin >> N >> M;
	if(N==M){
		cout << "=\n";
	}else if(N*log(M)>M*log(N)){
		cout << "<\n";
	}else if(N*log(M)<M*log(N))
		cout << ">\n";
	else
		cout << "=\n";
}
