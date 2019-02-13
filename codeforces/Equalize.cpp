#include<bits/stdc++.h>

using namespace std;

int main(){
	int N;
	long long out=0;
	scanf("%d",&N);
	string str1,str2;
	cin >> str1 >> str2;
	for(int i=1;i<(int)str1.size();i++)
		if(str1[i]!=str1[i-1] and str1[i]!=str2[i] and str2[i]!=str2[i-1]){
			out++;
			swap(str1[i],str1[i-1]);
		}
	for(int i=0;i<N;i++)
		if(str1[i]!=str2[i])
			out++;
	printf("%lld\n",out);
}
