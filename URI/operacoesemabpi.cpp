#include<bits/stdc++.h>
using namespace std;

typedef struct Node no;
set<char> l;
int N,c;
struct Node{
	char info;
	no* esq;
	no* dir;
	Node(char a){
		info=a;
		esq=dir=NULL;
	}
};
	
void adc_no(char s,no* root){
	if(root==NULL)
		root=new Node(s);
	else if(root->info > s){
		if(root->esq==NULL)	root->esq=new Node(s);
		else
			adc_no(s,root->esq);
	}else{
		if(root->dir==NULL)	root->dir=new Node(s);
		else
			adc_no(s,root->dir);

	}
}

void in(no* root){
	if(root->esq!=NULL)
		in(root->esq);
	c++;
	cout << root->info;
	cout << ((c!=N)?" ":"\n");
	if(root->dir!=NULL)
		in(root->dir);

}

void pre(no* root){
	c++;
	cout << root->info;
	cout << ((c!=N)?" ":"\n");
	if(root->esq!=NULL)
		pre(root->esq);
	if(root->dir!=NULL)
		pre(root->dir);
}

void pos(no* root){
	if(root->esq!=NULL)
		pos(root->esq);
	if(root->dir!=NULL)
		pos(root->dir);
	c++;
	cout << root->info;
	cout << ((c!=N)?" ":"\n");
}

void busca(char a){
	if(l.find(a)==l.end())
		cout << a << " nao existe\n";
	else
		cout << a << " existe\n";
}
int main(){
	string str1;
	char str2;
	no* root;
	root =NULL;N=0;
	while(cin >> str1){
		if(str1=="INFIXA"){
			c=0;
			in(root);
		}else if(str1=="PREFIXA"){
			c=0;
			pre(root);
		}else if(str1=="POSFIXA"){
			c=0;
			pos(root);
		}else{
			cin >> str2;
			if(str1=="I"){
				N++;
				l.insert(str2);
				if(root==NULL)
					root=new Node(str2);
				else
					adc_no(str2,root);
			}else
				busca(str2);
		}
	}

}
