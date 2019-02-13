#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin >> str;
	int quant=0;
	bool flag=(str[0]=='C');
	for(auto &c:str){
		if(c=='C' and ((quant<2 and !flag) or flag)){
			cout << 'B';
			if(!flag)
				quant++;
			else flag=false,quant=1;
		}else if(c=='C'){
			cout << 'P';
			quant=0;
		}else if(c=='S' and ((quant<2 and flag) or !flag)){
			cout << 'D';
			if(flag)
				quant++;
			else flag=true,quant=1;
		}else{
			cout << 'T';
			quant=0;
		}
	}
	cout << '\n';
}
