#include<bits/stdc++.h>
using namespace std;

int N,M;
string str;
int main(){
	scanf("%d %d",&N,&M);
	cin >> str;
	string out="";
	int a=0,b=0;
	for(auto  &c:str){
		if(c=='(' and a<(M/2))
			out+='(',a++;
		if(c==')' and b<(M/2))
			out+=')',b++; 
		if(a==(N/2) and b==(N/2)) break;
	}
	cout << out << '\n';


}
