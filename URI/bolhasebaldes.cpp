#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
int merge(vector<int> &A){
	int inv=0;
	if(A.size()==1)
		return 0;
	vector<int> u1,u2;
	for(int i=0;i<A.size()/2;i++)
		u1.push_back(A[i]);
	for(int i=A.size()/2;i<A.size();i++)
		u2.push_back(A[i]);
	inv+=merge(u1);
	inv+=merge(u2);
	u1.push_back(inf);
	u2.push_back(inf);
	int ini1=0,ini2=0;
	for(int i=0;i<A.size();i++){
		if(u1[ini1]<u2[ini2]){
			A[i]=u1[ini1];
			ini1++;
		}else{
			A[i]=u2[ini2];
			ini2++;
			inv+=u1.size()-ini1+1;
		}
	}
	return inv;
}

int main(){
	int N,a;
	while(cin >> N and N){
	vector<int> S;
	while(N--){
		scanf("%d",&a);
		S.push_back(a);
	}
	int saida = merge(S);
	if(saida%2==1)
		printf("Marcelo\n");
	else
		printf("Carlos\n");
	}
}
