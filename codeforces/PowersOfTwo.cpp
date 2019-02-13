#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi acos(-1)
#define f first
#define s second
#define pb push_back
#define all(a) a.begin(),a.end()
#define db(a) cerr << #a << " = " << a << '\n';
#define _ << " , " << 

typedef pair<int,int> ii;
typedef pair<int, ii> iii;

int bit[33];
int32_t main(){
	int N,K,cont=0;
	cin >> N >> K;
	for(int i=0;i<32;i++)
		if((1<<i) & N)
			bit[i]=1,cont++;
	if(cont>K)
		return puts("NO");
	//cout << cont << '\n';
	if(cont==K){
		printf("YES\n");
		for(int j=31;j>=0;j--)
			while(bit[j]--)
				cout << (1<<j) << " ";
		puts("");
		return 0;
	}
	for(int i=31;i>=1;i--){
		while(bit[i]){
			bit[i-1]+=2;
			cont++;
			bit[i]--;
			if(cont==K){
				printf("YES\n");
				for(int j=31;j>=0;j--)
					while(bit[j]--)
						cout << (1<<j) << " ";
				puts("");
				return 0;
			}
		}
	}
			
	puts("NO");
}



















