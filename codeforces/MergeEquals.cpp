#include<bits/stdc++.h>

using namespace std;

#define f first
#define s second

map<int,int> Map;

bool cmp1(pair<int,int> a,pair<int,int> b){
	return a.first<b.first;
}
bool cmp2(pair<int,int> a,pair<int,int> b){
	return a.second<b.second;
}
int main(){
	int N;
	scanf("%d",&N);
	vector< pair<int,int> > A(N);
	for(int a=0;a<N;a++)
		scanf("%d",&A[a].f),A[a].s=a;
	bool flag=true;
	while(flag){
		flag=false;
		sort(A.begin(),A.end(),cmp1);
		vector<int> r;
		for(int i=1;i<(int)A.size();i++){
			if(A[i].f==A[i-1].f){
				flag=true;
				A[i].f=2*A[i].f;
				A.erase(A.begin()+(i-1));
				i--;
			}
		}
	}
	sort(A.begin(),A.end(),cmp2);
	printf("%d\n",(int)A.size());
	for(auto &a:A)
		printf("%d ",a.f);
	printf("\n");
}
