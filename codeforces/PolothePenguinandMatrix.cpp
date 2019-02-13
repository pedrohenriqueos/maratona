#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M,D,out1=0,out2=0;
	scanf("%d %d %d",&N,&M,&D);
	int Mat[N][M],m=0x3f3f3f3f;
	vector<int> A;
	int v;
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++){
			scanf("%d",&Mat[i][j]);
			if(i==0 and j==0) v=Mat[i][j]%D;
			if(Mat[i][j]%D!=v){
				printf("-1\n");
				return 0;
			}
			A.push_back(Mat[i][j]);
		}
	sort(A.begin(),A.end());
	for(int i=0;i<A.size();i++){
		out1+=(abs((A[i]-A[A.size()/2]))/D);
		out2+=(abs((A[i]-A[(A.size()/2)+1]))/D);
	}
	printf("%d\n",min(out1,out2));
}
