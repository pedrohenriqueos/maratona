#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,A,B;
	scanf("%d %d %d",&N,&A,&B);
	string str;
	cin >> str;
	bool flag=true;
	int ma=max(A,B),mi=min(A,B),cont=0;
	for(int i=0;i<(int)str.size();i++){
		if(str[i]=='.'){
			if(flag){
				if(ma)
					cont++,ma--;
				flag=false;
			}else{
				if(mi)
					cont++,mi--;
				flag=true;
			}
		}else{
			int aux=ma,aux1=mi;
			ma=max(aux,aux1);
			mi=min(aux,aux1);
			flag=true;
		}
	}
	printf("%d\n",cont);
}
