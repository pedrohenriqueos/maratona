#include <bits/stdc++.h>
using namespace std;

int main(){
	int R,N,num=1;
	while(cin >> R >> N){
		if(R==0 and N==0)
			break;
		int i=1;
		for(;i<=26;i++){
			if(i*N>=R)
				break;
		}
		if(i*N>=R)
		cout << "Case " << num << ": " << i-1 << '\n';
		else
		cout << "Case " << num << ": impossible\n"; 
		num++;
	}
}
