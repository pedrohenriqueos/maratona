#include<bits/stdc++.h>
using namespace std;

int main(){
	string str1,str2;
	cin >> str1 >> str2;
	int out=0;
	bool flag;
	for(int i=0;i<((int)str1.size()-(int)str2.size()+1);i++){
		flag=true;
		int aux=i;
		for(int j=0;j<(int)str2.size();j++,aux++){
			if(str2[j]==str1[aux]){
				flag=false;
				break;
			}
		}
		out+=(flag);
	}
	cout << out << '\n';
}
