#include<bits/stdc++.h>
using namespace std;

int S[200002];
string str;

int main(){
	cin >> str;
	int a=0;
	if(str[0]=='1' or str[(int)str.size()-1]=='1')
		return puts("-1");
	int f=0;
	for(auto &c:str){
		a+=(c=='1');
		f+=(c=='1');
		f-=(c!='1');
		if(f==2)
			return puts("-1");
	}
	if(a==0){
		printf("%d\n",(int)str.size());
		for(int i=0;i<(int)str.size();i++){
			printf("1 %d\n",i+1);
		}
		return 0;
	}
	if(a>=(int)str.size()/2)
		return puts("-1");
	bool flag=false;
	int k=0,s=1,z=0;
	vector<int> R[a],X;
	R[0].push_back(1);
	for(int i=1;i<(int)str.size();i++){
		if(str[i]=='1')
			R[k].push_back(i+1),k++;
		else if(R[z].size()==2)
			R[z].push_back(i+1),z++;
		else if(s<a)
			R[s].push_back(i+1),s++;
		else
			X.push_back(i+1);
	}
	printf("%d\n",(int)X.size()+a);
	for(int i=0;i<a;i++){
		printf("%d ",(int)R[i].size());
		for(auto &a:R[i])
				printf("%d ",a);
		puts("");
	}	
	for(int i=0;i<(int)X.size();i++)
		printf("1 %d\n",X[i]);
}
