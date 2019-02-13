#include<bits/stdc++.h>
using namespace std;
#define f first
#define s second
int main(){
	int N,a,saida=0;
	pair<int,int> max={0,-1},min={102,-1};
	cin >> N;
	vector<int> A;
	for(int i=1;i<=N;i++){
		cin >> a;
		if(a>max.f){
			max.f=a;
			max.s=i;
		}
		if(a<=min.f){
			min.f=a;
			min.s=i;
		}
	}
	if(min.f==max.f)
		cout << "0\n";
	else{
	saida+=(max.s-1);
	if(max.s>min.s)
		min.s++;
	saida+=(N-min.s);
	cout << saida << '\n';
	}
}	
