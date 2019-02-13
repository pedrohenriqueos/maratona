#include<bits/stdc++.h>
using namespace std;

int v[]={31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31},
v2[]={31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31},
v3[]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31},
v4[]={31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	int N;
	cin >> N;
	vector<int> A(N);
	bool flag=false,flag2=false;
	for(auto &a:A){ 
		cin >> a;
		if(a==29)
			flag=true;
		else if(a==28)
			flag2=true;
	}
	for(int i=0;i<(48-N);i++){
		if(flag2 and !flag){
			if(v[i]==A[0]){
				int aux=i,j=0;
				for(;j<i+N;j++,aux++){
					if(A[j]!=v[aux])
						break;
				}
				if(aux==(i+N)){
					cout << "Yes\n";
					return 0;
				}
			}
		}else if(flag and !flag2){
			if(v2[i]==A[0]){
				int aux=i,j=0;
				for(;j<i+N;j++,aux++){
					if(A[j]!=v2[aux])
						break;
				}
				if(aux==(i+N)){
					cout << "Yes\n";
					return 0;
				}
			}
		}else{
			if(v3[i]==A[0]){
				int aux=i,j=0;
				for(;j<i+N;j++,aux++){
					if(A[j]!=v3[aux])
						break;
				}
				if(aux==(i+N)){
					cout << "Yes\n";
					return 0;
				}
			}
			if(v4[i]==A[0]){
				int aux=i,j=0;
				for(;j<i+N;j++,aux++){
					if(A[j]!=v4[aux])
						break;
				}
				if(aux==(i+N)){
					cout << "Yes\n";
					return 0;
				}
			}
		}
	}
	cout << "No\n";

}
