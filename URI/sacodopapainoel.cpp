#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f

int main(){
	int T,M;
	int coin[5002],count[5002];
	cin >> T >> M;
	for(int i=0;i<T;i++)
		cin >> coin[i] >> count[i];
	memset(count,63,sizeof(count));
	count[0] = 0;
	for (int i=0;i<T;++i)
		for (int j=coin[i];j<=M;++j)
			if(count[j-coin[i]] != inf)
				count[j] = min(count[j],
				count[j-coin[i]]+1);
	cout << count[M] << '\n';
}
