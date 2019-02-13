#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,a;
	cin >> N;
	vector<int> A,B;
	while(N--){
		cin >> a;
		A.push_back(a);
	}
	cin >> N;
	while(N--){
		cin >> a;
		B.push_back(a);
	}
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	int saida=0;
	for(int i=0,j=0;i<A.size();){
		if(A[i]==B[j] or A[i]== B[j]+1 or A[i]==B[j]-1){
			saida++;
			i++,j++;
		}else if(A[i]>B[j]){
			j++;
		}else
			i++;
		if(j==B.size())
			break;	
	}
	cout << saida << '\n';
}
