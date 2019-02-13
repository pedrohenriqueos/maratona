#include<bits/stdc++.h>
using namespace std;

int main(){
	string s1,s2,s3;
	unsigned long long int a1=0,a2=0,a3=0;
	cin >> s1 >> s2 >> s3;
	for(int i=0,j=s1.size()-1;j>=0;i++,j++)
		if(s1[j]>='0' and s1[j]<='9')
			a1+=(pow(16,i)*(int)(s1[j]-'0'));
		else
			a1+=(pow(16,i)*(int)(s1[j]-'a'+10));
	for(int i=0,j=s2.size()-1;j>=0;i++,j++)
		if(s2[j]>='0' and s2[j]<='9')
			a2+=(pow(16,i)*(int)(s2[j]-'0'));
		else
			a2+=(pow(16,i)*(int)(s2[j]-'a'+10));
	for(int i=0,j=s3.size()-1;j>=0;i++,j++)
		if(s3[j]>='0' and s3[j]<='9')
			a3+=(pow(16,i)*(int)(s3[j]-'0'));
		else
			a3+=(pow(16,i)*(int)(s3[j]-'a'+10));
	int saida=1;
	if(a1>a2)
		saida+=(a2/a1);
	if(a2>a3 and a1>a2)
		saida+=(a3/a2);
	cout << saida << '\n';
}
