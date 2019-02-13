#include<bits/stdc++.h>
using namespace std;
#define modv 100000007

int main(){
	string str;
	while(cin >> str){
		if(str=="0") 
			break;
		int L[30];
		unsigned long long int DP[str.size()+1];
		DP[1]=1;
		for(int i=2;i<=str.size();i++)
			DP[i] = (DP[i-1]*i)%modv;
		memset(L,0,sizeof(L));
		for(char c:str)
			L[(int)(c-'a')]++;
		unsigned long long int resp=DP[str.size()];
		for(int i=0;i<30;i++)
			if(L[i]>1)
				resp/=DP[L[i]];
		printf("%lld\n",resp);
	}

}
