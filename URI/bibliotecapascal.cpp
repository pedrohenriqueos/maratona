#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,D;
	while(cin >> N >> D){
	if(N==0 and D==0)
		break;
	int Mat[N*D],C[N];
	bool s=false;
	for(int i=0;i<N;i++)
		C[i]=0;
	for(int i=0;i<(N*D);i++){
		cin >> Mat[i];
		if(Mat[i]>0)
			C[i%N]++;
	}
	for(int i=0;i<N;i++)
		if(C[i]>=D){
			s=true;
			break;
		}
	(s) ? cout << "yes\n" : cout << "no\n";
	}
}
