#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int i=0;i<N;i++){
		string S;
		int a=0,s=0,b=0;
		cin >> S;
		for(char c: S){
			if(s<0)
				s=0;
			if(c=='<'){
				a++;
				s++;
			}else if(c=='>'){
				b++;
				s--;
				if(s<0 and b>0)
					b--;
			}
		}
		(a>b)? cout << b <<'\n': cout << a << '\n';
	}

}
