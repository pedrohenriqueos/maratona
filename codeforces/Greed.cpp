#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N; 
	unsigned long long A,B,soma=0,max1=0,max2=0;
	for(int i=0;i<N;i++)
		cin >> A,soma+=A;
	for(int i=0;i<N;i++){
		cin >> B;
		if(i==0) max1=B;
		else if(i==1) max2=B;
		else{
			if(B>max1){
				if(max1>max2) max2=max1;
				max1=B;
			}else if(B>max2){
				if(max2>max1) max1=max2;
				max2=B;
			}	
		}
	}
	cout << (((max1+max2)>=soma)?"YES\n":"NO\n");

}
