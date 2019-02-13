#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	cin >> N;
	int a,k,min1,max1;
	for(int n=0;n<N;n++){
		cin >> k >> a;
		if(n==0){
		min1=a;
		max1=k;
		}
		if(a<min1)
		min1=a;
		if(k>max1)
		max1=k;
	}
	cin >> M;
	int b,f,max2,min2;
	for(int m=0;m<M;m++){
		cin >> b >> f;
		if(m==0){
		max2=b;
		min2=f;
		}
		if(b>max2)
		max2=b;
		if(f<min2)
		min2=f;
	}
	(max1-min2>max2-min1) ? ((max1-min2>0) ? cout << max1-min2 << '\n' : cout << "0\n") :
	((max2-min1>0) ? cout << max2-min1 << '\n' : cout << "0\n");
}
