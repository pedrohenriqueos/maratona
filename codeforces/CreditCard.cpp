#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M,atual=0,saida=0;
	cin >> N >> M;
	int A[N];
	bool flag=false;
	for(int i=0;i<N;i++)
		cin >> A[i];
	for(int i=0;i<N;i++){
		if(!flag){
		if(A[i]==0){
			if(atual<0){
				if((-atual)>M)
					flag=true;
				else{
					saida++;
					if((i+1)<N and A[i+1]>=0)			
					atual=0;
					else if((i+1)<N)
					atual=-A[i+1];
				}	
			}
		}
		else{
			atual+=A[i];
		}
		}

	}
	if(flag)
		cout << "-1\n";
	else
		cout << saida << '\n';
}
