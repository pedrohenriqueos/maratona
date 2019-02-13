#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,w,h,atual=(int)(1e9)+1;
	cin >> N;
	while(N--){
		cin >> w >> h;
		if(max(w,h)<=atual){
			atual=max(w,h);
		}else if(min(w,h)<=atual){
			atual=min(w,h);
		}else{
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
}
