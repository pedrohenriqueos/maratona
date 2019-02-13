#include <bits/stdc++.h>
using namespace std;

int main(){
	int B,N;
	while(cin >> B >> N){
		if(B==0 and N==0)
			break;
		int R[B],a,b,c;
		bool s=true;
		for(int i=0;i<B;i++)
			cin >> R[i];
		for(int i=0;i<N;i++){
			cin >> a >> b >> c;
			R[a-1]-=c;
			R[b-1]+=c;
		}
		for(int i=0;i<B;i++)
			if(R[i]<0)
				s=false;
		(s) ? cout << "S\n" : cout << "N\n"; 
	}
}
