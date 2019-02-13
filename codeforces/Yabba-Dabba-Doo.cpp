#include<bits/stdc++.h>
using namespace std;

int main(){
	string str[10];
	for(int i=0;i<10;i++){
		cin >> str[i];
		for(auto &c:str[i]){
			if(c=='X'){
				if(str[i-1][0])
				out+=(int)(str[i-1][0]-'0');
				out+=(int)(str[i-1][1]-'0');
			}
		}
	}

}
