#include<bits/stdc++.h>

using namespace std;

int main(){
	int N,M;
	while(cin >> N >> M){
		char c;
		int p,q,cont=0;
		vector<int> A(N,0);
		vector< pair<int,int> > Map(10000);
		while(M--){
			cin >> c;
			if(c=='C'){
				cin >> p >> q;
				int m=0,r=-1;
				bool flag=false;
				for(int i=0;i<N;i++){
					if(A[i]==0){
						if(m==0)
							r=i;
						m++;
						if(m==q){
							flag=true;
							break;
						}
					}else
						m=0;
				}
				if(flag){
					Map[p]={q,r};
					cont++;
					for(int i=r;i<r+q;i++)
						A[i]=1;
				}
			}else{
				cin >> p;
				for(int i=Map[p].second;i<Map[p].second+Map[p].first;i++)
					A[i]=0;
			}
		}
		cout << cont*10 << '\n';
	}
}
