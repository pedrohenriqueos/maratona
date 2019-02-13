#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	while(cin >> N){	
	int a=1,s=1;
	while(a<=N){ 
		int k=N-a;
		for(int i=0;i<k/2;i++)
			printf(" ");
		for(int x=0;x<a;x++)
			printf("*");
		printf("\n");
		a+=2;
	}
	for(int g=0;g<2;g++){
		int k=N-s;
		for(int i=0;i<k/2;i++)
			printf(" ");
		for(int x=0;x<s;x++)
			printf("*");
		printf("\n");
		s+=2;
	}
	printf("\n");
	}
}
