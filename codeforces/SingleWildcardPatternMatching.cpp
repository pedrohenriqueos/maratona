#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	cin >> N >> M;
	string str1,str2;
	cin >> str1 >> str2;
	bool flag2=false;
	for(int i=0;i<(int)str1.size();i++)
		if(str1[i]=='*'){
			flag2=true;
			break;
		}
	if(N>(M+1) or (N<M and !flag2)){
		cout << "NO\n";
		return 0;
	}
	bool flag=false;
	for(int i=0;i<(int)str1.size();i++){
		if(str1[i]=='*')
			break;
		if(str1[i]!=str2[i]){
			flag=true;
			break;
		}
	}
	for(int i=(int)str1.size()-1,j=(int)str2.size()-1;i>=0;i--,j--){
		if(str1[i]=='*')
			break;
		if(str1[i]!=str2[j]){
			flag=true;
			break;
		}
	}
	if(flag)
		cout << "NO\n";
	else
		cout << "YES\n";
}
