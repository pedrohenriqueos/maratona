#include<bits/stdc++.h>
using namespace std;

int V[101];
int main(){
	int N;
	scanf("%d",&N);
	vector<int> A(N),U,D,T;
	for(auto &a:A) scanf("%d",&a),V[a]++;
	for(int i=1;i<101;i++){
		if(V[i]>=3)
			T.push_back(i);
		else if(V[i]==2)
			D.push_back(i);
		else if(V[i]==1)
			U.push_back(i);
	}
	if((int)U.size()%2==0 or ((int)U.size()%2==1 and (int)T.size())){
		printf("YES\n");
		int m1=0,m2=0;
		string str="";
		if((int)U.size()%2==0){
			for(int i=0;i<N;i++){
				if(find(U.begin(),U.end(),A[i])!=U.end()){
					if(m1>m2)
						str+='B',m2++;
					else
						str+='A',m1++;
				}else
					str+='A';
			}
		}else{
			m1=0;
			m2=0;
			bool f=false,esc;
			for(int i=0;i<N;i++){
				if(find(U.begin(),U.end(),A[i])!=U.end()){
					if(m1>m2)
						str+='B',m2++;
					else
						str+='A',m1++;
				}else if(!f and find(T.begin(),T.end(),A[i])!=T.end()){
					f=true;
					if(m1>m2){
						str+='B',m2++; esc=true;
					}else{
						str+='A',m1++; esc=false;
					}
				}else if(f and find(T.begin(),T.end(),A[i])!=T.end()){
					if(esc) str+='A';
					else str+='B';
				}else
					str+='B';
			}
		}
		printf("%s\n",str.c_str());
	}else
		printf("NO\n");
}








