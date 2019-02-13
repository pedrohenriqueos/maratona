#include<bits/stdc++.h>
using namespace std;

int main(){
	int V,s=1e6,v=-1;
	string str="";
	cin >> V;
	vector<int> A(9);
	for(auto &a:A) cin >> a;
	for(int i=8;i>=0;i--)
		if(s>A[i])
			s=A[i],v=i;
	while(V>=s){
		V-=s;
		str+=(char)(v+'1');
	}
	if(str=="")
		puts("-1");
	else
		printf("%s\n",str.c_str());
}
