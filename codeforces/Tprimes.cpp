#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int N,a;
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> a;
		long long int k=sqrt(a),j;
		for(j=2;j*j<k;j++)
			if(a%j==0)
				break;
		if(j*j>k and k*k==a and a>1)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
