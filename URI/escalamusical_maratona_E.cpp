#include<bits/stdc++.h>
using namespace std;

int v[13];
int main(){
	int N,a;
	cin >> N;
	while(N--){
		cin >> a;
		while(a>12)
			a-=12;
		v[a]++;
	}
	if(v[2]==0 and v[4]==0 and v[7]==0 and v[9]==0 and v[11]==0){
		cout << "do\n";
	}else if(v[3]==0 and v[5]==0 and v[8]==0 and v[10]==0 and v[12]==0){
		cout << "do#\n";
	}else if(v[4]==0 and v[6]==0 and v[9]==0 and v[11]==0 and v[1]==0){
		cout << "re\n";
	}else if(v[5]==0 and v[7]==0 and v[10]==0 and v[12]==0 and v[2]==0){
		cout << "re#\n";
	}else if(v[6]==0 and v[8]==0 and v[11]==0 and v[1]==0 and v[3]==0){
		cout << "mi\n";
	}else if(v[7]==0 and v[9]==0 and v[12]==0 and v[2]==0 and v[4]==0){
		cout << "fa\n";
	}else if(v[8]==0 and v[10]==0 and v[1]==0 and v[3]==0 and v[5]==0){
		cout << "fa#\n";
	}else if(v[9]==0 and v[11]==0 and v[2]==0 and v[4]==0 and v[6]==0){
		cout << "sol\n";
	}else if(v[10]==0 and v[12]==0 and v[3]==0 and v[5]==0 and v[7]==0){
		cout << "sol#\n";
	}else if(v[11]==0 and v[1]==0 and v[4]==0 and v[6]==0 and v[8]==0){
		cout << "la\n";
	}else if(v[12]==0 and v[2]==0 and v[5]==0 and v[7]==0 and v[9]==0){
		cout << "la#\n";
	}else if(v[1]==0 and v[3]==0 and v[6]==0 and v[8]==0 and v[10]==0){
		cout << "si\n";
	}else
		cout << "desafinado\n";
}
