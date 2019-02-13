#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		string str;
		cin >> str;
		bool out=false;
		int C[11];
		memset(C,0,sizeof C);
		for(int i=0;i<(int)str.size();i++){
			if(str[i]>='0' and str[i]<='9')
				C[(int)(str[i]-'0')]=1;
		}
		for(long long n=0;n<10;n++){
			if(C[n]) continue;
			long long num1=0,num2=0,num3=0;
			int s=0,tam1=0,tam2=0,tam3=0;
			bool flag1=false,flag2=false;
			char op;
			bool num1neg=false,num2neg=false,num3neg=false;
			for(int i=0;i<(int)str.size();i++){
				if(i==0 and str[i]=='-'){
					num1neg=true;
					continue;
				}
				if(!flag1 and (str[i]=='-' or str[i]=='+' or str[i]=='*')){
					flag1=true;
					op=str[i];
					continue;
				}
				if(flag1 and !flag2 and (str[i]=='-')){
					num2neg=true;	
					continue;
				}
				if(flag1 and flag2 and (str[i]=='-')){
					num3neg=true;
					continue;
				}
				if(str[i]=='='){
					flag2=true;
					continue;
				}
				if(!flag1){
					tam1++;
					if(str[i]=='?'){
						num1=num1*10LL+n;
					}else{
						num1=num1*10LL+(long long)(str[i]-'0');
					}
				}else if(!flag2){
					tam2++;
					if(str[i]=='?'){
						num2=num2*10LL+n;
					}else{
						num2=num2*10LL+(long long)(str[i]-'0');
					}
				}else{
					tam3++;
					if(str[i]=='?'){
						num3=num3*10LL+n;
					}else{
						num3=num3*10LL+(long long)(str[i]-'0');
					}
				}
			}
			long long aux1=num1,aux2=num2,aux3=num3;
			while(aux1>0LL){
				aux1/=10LL,tam1--;
			}
			if(num1==0LL) tam1--;
			while(aux2>0LL){
				aux2/=10LL,tam2--;
			}
			if(num2==0LL) tam2--;
			while(aux3>0LL){
				aux3/=10LL,tam3--;
			}
			if(num3==0LL) tam3--;
			if(tam1!=0 or tam2!=0 or tam3!=0) continue;
			if(num1neg) num1*=-1;
			if(num2neg) num2*=-1;
			if(num3neg) num3*=-1;
			if(op=='+'){
				if(!out and num1+num2==num3){
					cout << n << '\n';
					out=true;
					break;
				}
			}else if(op=='-'){
				if(!out and num1-num2==num3){
					cout << n << '\n';
					out=true;
					break;
				}
			}else{
				if(!out and num1*num2==num3){
					cout << n << '\n';
					out=true;
					break;
				}
			}
		}
		if(!out)
			cout << "-1\n";
	}

}
