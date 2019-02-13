#include<bits/stdc++.h>
using namespace std;

typedef struct Node no;
int c,N;
struct Node{
	char info;
	no* esq;
	no* dir;
	Node(char a){
		info=a;
		esq=dir=NULL;
	}
};

void adc_no(char a,no* root){
	if(root==NULL) root=new Node(a);
	else if(root->info > a){
		if(root->esq==NULL)
			root->esq=new Node(a);
		else
			adc_no(a,root->esq);	
	}else{
		if(root->dir==NULL)
			root->dir=new Node(a);
		else
			adc_no(a,root->dir);
	}
}

void pre(no * root){
	c++;
	cout << root->info;
	cout <<((c!=N)?" ":"\n");
	
	if(root->esq!=NULL)
		pre(root->esq);
	if(root->dir!=NULL)
		pre(root->dir);
}

void in(no*root){
	if(root->esq!=NULL)
		in(root->esq);
	c++;
	cout << root->info;
	cout <<((c!=N)?" ":"\n");
	if(root->dir!=NULL)
		in(root->dir);
}
void pos(no*root){
	if(root->esq!=NULL)
		pos(root->esq);
	if(root->dir!=NULL)
		pos(root->dir);
	c++;
	cout << root->info;
}


int main(){
	string str,str2;
	while(cin >> str){
		no* root;root=NULL;
		N=str.size();
		cin >> str2;
		for(char c:str){
			if(root==NULL)
				root= new Node(c);
			else 
				adc_no(c,root);
		}
		pos(root);
		cout << '\n';
	}
}
