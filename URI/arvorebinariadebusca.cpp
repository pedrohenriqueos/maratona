#include<bits/stdc++.h>
using namespace std;

typedef struct Node no;
int c,N;
struct Node{
	int info;
	no* esq;
	no* dir;
	Node(int a){
		info=a;
		esq=dir=NULL;
	}
};

void adc_no(int a,no* root){
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
	cout <<((c!=N)?" ":"\n");
}


int main(){
	int T,A,caso=1;
	cin >> T;
	while(T--){
		no* root;
		root=NULL;
		cin >> N;
		for(int i=0;i<N;i++){
			cin >> A;
			if(i==0)
				root= new Node(A);
			else 
				adc_no(A,root); 
		}
		cout << "Case " << caso++ << ":\n";
		cout << "Pre.: ";
		c=0;
		pre(root);
		c=0;
		cout << "In..: ";
		in(root);
		c=0;
		cout << "Post: ";
		pos(root);
		if(T>=0)
			cout << '\n';
	}


}
