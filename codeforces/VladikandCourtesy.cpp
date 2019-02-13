#include<bits/stdc++.h>
using namespace std;

int main(){
	int A,B;
	cin >> A >> B;
	bool flag=true;
	for(int i=1;i<1e9;i++, flag=!flag){
		if(flag and A>=i)
			A-=i;
		else if(flag)
			return puts("Vladik");
		else if(!flag and B>=i)
			B-=i;
		else if(!flag)
			return puts("Valera");
	}

}
