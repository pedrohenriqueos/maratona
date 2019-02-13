#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin >> str;
	int impar=0,par=0;
	int k=1;
	for(int i=str.size()-1;i>=0;i--){
		if(k%2==1)
			impar+=(int)(str[i]-'0');	
		else
			par+=(int)(str[i]-'0');
		k++;
	}
	if(impar<par){
		int a=abs(impar-par);
		double k= (double)a/11.0;
		impar+=(11*ceil(k));
	}
	cout << ((((impar-par)%11)==0)?"S\n":"N\n");
}
