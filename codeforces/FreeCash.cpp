#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	int k=-1,x=-1,parc=0,out=1,a,b;
	while(N--){
		cin >> a >> b;
		if(a!=k or b!=x){
			out=max(out,parc);
			k=a,x=b;
			parc=1;
		}else
			parc++;
	}
	cout << max(out,parc) << '\n';

}
