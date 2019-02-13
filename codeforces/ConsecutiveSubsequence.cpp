#include<bits/stdc++.h>
using namespace std;

int N,A[200010];
int pd[200010][200010];
vector<int> dp(int val,int id,vector<int> S){
	vector<int> aux,aux2;
	if(id>N) return S;
	vector<int> re1,re2;
	if(val==(A[id]-1)){
		S.push_back(id);
		re1=dp(A[id],id+1,S);
		//S.insert(S.end(),re1.begin(),re1.end());
		return S;
	}
	aux2.push_back(id);
	re1=dp(A[id],id+1);
	aux2.insert(aux2.end(),re1.begin(),re1.end());
	if(val==0)
		return aux2;
	re2=dp(val,id+1);
	return re2;
	
}
int main(){
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
		scanf("%d",&A[i]);
	vector<int> resp=dp(0,0);
	printf("%d\n",(int)resp.size()-1);
	for(int i=1;i<(int)resp.size();i++)
		printf("%d ",resp[i]);
}
