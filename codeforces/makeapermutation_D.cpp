//Primeira de nivel D
#include<bits/stdc++.h>
using namespace std;

int val[200002];

int main(){
	int N;
	cin >> N;
	int A[N+1],cont=0;
	memset(val,0,sizeof(val));
	for(int i=1;i<=N;i++){
		cin >> A[i];
		val[A[i]]++;
		if(val[A[i]]>1)
			cont++;
	}
	cout << cont << '\n';
	int save=1;
	for(int i=1;i<=N;i++){
		//cout << val[A[i]] << " " << A[i] << '\n';
		if(val[A[i]]==1){	
			cout << A[i] << ' ';
		}else{
		if(val[A[i]]!=-1)
		val[A[i]]=max(1,val[A[i]]-1);
		bool flag=false;
		for(int j=save;j<=N;j++){
			if(val[j]==0){
				if(j<A[i] and val[A[i]]!=-1){
				val[j]=1;
				flag=true;
				cout << j << ' ';
				save=j+1;
				}else if(val[A[i]]==-1){
				val[j]=1;
				flag=true;
				cout << j << ' ';
				save=j+1;
				}
				break;
			}
		}
		if(!flag){
			cout << A[i] << ' ';
			val[A[i]]=-1;
		}
		}
	}
	cout << '\n';
}
