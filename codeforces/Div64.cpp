#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin >> str;
	int z=0,u=0;
	for(int i=str.size()-1;i>=0;i--){
		if(z!=6){
			if(str[i]=='0')
				z++;
		}else if(str[i]=='1')
			u++;
	}
	cout << ((u)?"yes\n":"no\n");
}
