#include<bits/stdc++.h>

using namespace std;

int main(){
	int N,A,B;
	cin >> N >> A >> B;
	for(int i=0;i<N;i++){
		int a;
		cin >> a;
		if(a<45){
			cout << a << " 1\n"; 
		}else if(a<(45+A))
			cout << "-1\n";
		else
			cout << a-45 << " 2\n";
	}
}
