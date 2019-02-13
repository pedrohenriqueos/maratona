#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	for(int t=1;t<=T;t++){
		int M[10][10];
		int A[10],B[10];
		for(int i=1;i<=9;i++)
			for(int j=1;j<=9;j++)
				cin >> M[i][j];
		bool flag=true;
		for(int i=1;i<=9;i++){
			memset(A,0,sizeof(A));
			memset(B,0,sizeof(B));
			for(int j=1;j<=9;j++){
				A[M[j][i]]++;
				B[M[i][j]]++;
			}
			for(int k=1;k<=9;k++){
				if(B[k]==0){
					flag=false;
					break;
				}
				if(A[k]==0){
					flag=false;
					break;
				}
			}
		}
		for(int a=1;a<=7;a+=3)
			for(int b=1;b<=7;b+=3){
				memset(A,0,sizeof(A));
				for(int i=a;i<=a+2;i++)
					for(int j=b;j<=b+2;j++){
						A[M[i][j]]++;
					}
				for(int m=1;m<=9;m++)
					if(A[m]==0){
						flag=false;
						break;
					}
				
			}
		cout << "Instancia " << t << '\n';
		cout << ((flag)?"SIM\n\n":"NAO\n\n");
	}
}
