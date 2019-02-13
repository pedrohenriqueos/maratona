#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	scanf("%d",&N);
	vector< pair<int,int> > C(N),B;
	string s="";
	s+='A';
	for(int i=1;i<=N;i++){
		s+='A';
		int a;
		cin >> a;
		C[i-1]={a,i};
	}
	sort(C.begin(),C.end());
	B.push_back({C[N-1]});
	s[C[N-1].second]='B';
	for(int i=N-2;i>=0;i--){
		bool flag=true;
		for(int j=0;j<(int)B.size();j++){
			if(B[j].second>A[i].second and (abs(B[j].second-A[i].second)%A[i].first)==0){
				flag=false;
				break;
			}
		}
		if(flag){
			printf("B = %d %d\n",A[i].second,A[i].first);
			B.push_back(A[i]);
			s[A[i].second]='B';
		}
	}
	s.erase(s.begin());
	printf("%s\n",s.c_str());
}
