#include<bits/stdc++.h>
using namespace std;

int main(){
	unsigned long long int N;
	cin >> N;
	while(N--){
		string S;
		unsigned long long int A,a=0,quant=0;
		cin >> S; 
		for(char c:S){
			if(c>='0' and c<='9'){
				(a==0)?(A=(int)(c-'0')):(A=A*10+(int)(c-'0'));
			}else
				quant++;
			a++;
		}
		unsigned long long int K=A;
		for(unsigned long long int i=1;i*quant<K;++i)
			A=A*(K-i*quant);
		cout << A << '\n';
	}
}
