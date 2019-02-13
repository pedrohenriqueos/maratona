#include<bits/stdc++.h>
using namespace std;

long long N,M,A,B;
int main(){
	cin >> N >> M >> A >> B;
	if(N%M!=0){
		long long i=1LL,j=N,m,resp;
		while(i<=j){
			m=(i+j)/2LL;
			if((m*M)<=0){
				j=m-1LL;
			}else if((m*M)>=N){
				resp=m;
				j=m-1LL;
			}else
				i=m+1LL;
		}
		cout << min(((((resp*M)-N)*A)<=0)?0x3f3f3f3f3f3f3f3f:(((resp*M)-N)*A),
					(((N%M)*B)<=0)?0x3f3f3f3f3f3f3f3f:((N%M)*B)) << '\n';
	}else{
		cout << "0\n";
	}

}
