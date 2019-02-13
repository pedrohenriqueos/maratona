// URI - 2087 - Conjuntos Bons e Ruins
#include<bits/stdc++.h>
using namespace std;
 
struct NodeTrie{
	map<int,NodeTrie*> filho;
	int fim;
	NodeTrie(){
		fim = 0;
	}
 
};
bool flag2;
inline void insert(NodeTrie *root, string str){
	NodeTrie *node = root;
	for(auto c:str){
		int id = c-'a';
		if(node->filho.find(id)==node->filho.end()){
			node->filho[id] = new NodeTrie();
			flag2=true;
		}
		node = node->filho[id];
	}
	node->fim++;
}
int cont=0;
bool flag;
void busca(NodeTrie *node){
	if(flag) return ;
	cont+=(node->fim);
	if(cont==2){
		flag=true;
		return ;
	}
	for(auto it = node->filho.begin();it!=node->filho.end();it++)
		busca(it->second);
	cont-=(node->fim);
}
 
int N;
bool cmp(string s,string s2){
	return (int)s.size()>(int)s2.size();
}
int main(){
	while(scanf("%d",&N) and N){
		cont=0;
		NodeTrie *root = new NodeTrie();
		vector<string> S;
		for(int n=0;n<N;n++){
			string s="";
			char c[102];
			scanf("%s",c);
			s=c;
			S.push_back(s);
		}
		sort(S.begin(),S.end(),cmp);
		for(auto &s:S){
			flag2=false;
			insert(root,s);
			cont+=flag2;
		}
		if(cont==N){
			puts("Conjunto Bom");
		}else
			puts("Conjunto Ruim");
	}
}
