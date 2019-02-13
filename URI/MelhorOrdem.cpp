#include<bits/stdc++.h>

using namespace std;
int N;
int lis(vector<int> &str){
	vector<int> pilha,resp;
	int pos[500002],pai[500002];
	for(int i=0;i<(int)str.size();i++){
		vector<int>::iterator it=upper_bound(pilha.begin(),pilha.end(),str[i]);
		int p=it-pilha.begin();
		if(it==pilha.end())pilha.push_back(str[i]);
		else *it=str[i];
		pos[p]=i;
		if(p==0) pai[i]=-1;
		else pai[i]=pos[p-1];
	}
	int p=pos[pilha.size()-1];
	while(p>=0){
		resp.push_back(str[p]);
		p=pai[p];
	}
	//reverse(resp.begin(),resp.end());
	return (int)resp.size();
}

int main(){
	while(scanf("%d",&N)!=EOF){
		vector<int> A(N);
		for(auto &a:A)scanf("%d",&a);
		printf("%d\n",lis(A));
	}

}
