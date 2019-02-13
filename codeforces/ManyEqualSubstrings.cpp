#include<bits/stdc++.h>
using namespace std;

int N,M,out;
string str2;
int arr[100002];
void build(){
	int i=0,j=1;
		while(j<(int)str2.size()){
			if(str2[i]==str2[j])
			arr[j]= ++i;
		else{
			i=0;
			if(str2[i]==str2[j])
			arr[j]=++i;
		}
		j++;
	}
}
int main(){
	cin >> N >> M;
	cin >> str2;
	for(int j=1;j<N;j++){
		int aux=j;
		int aux2=0,cont=0;
		if(str2[aux2]==str2[aux]){
			while(aux<N and str2[aux2]==str2[aux]){
				cont++,aux2++;aux++;
			}
		}
		if(aux==N)
			out=max(out,cont);
	}
	string aux=str2.substr(0,str2.size()-out);
	string f=str2.substr(str2.size()-out,out);
	for(int i=0;i<M;i++)
		cout << aux;
	cout << f << '\n';
}
