#include<bits/stdc++.h>

using namespace std;
#define int long long
int A,B;


int32_t main(){
	cin >> A >> B;
	int resp=0;
	for(int i=A;i<=B;i++){
		for(int j=2;j*j<=i;j++){
			if(j*j==i){
				resp+=j;
			}else if(i%j==0){
				resp+=((i/j) + j);
			}
		}
		if(i!=1)
			resp+=(i+1);
		else resp++;
	}	
	cout << resp << '\n';
}
