#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int N;
	cin >> N;
	string S;
	long long int i=0;
	while(S.size()!=N){
		if(i%5==0)
			S+='a';
		else if(i%5==1)
			S+='a';
		else if(i%5==2)
			S+='b';
		else if(i%5==3)
			S+='b';
		else
			S+='c';
		i++;
	}
	cout << S << '\n';
}
