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

int32_t main(){
	int N,X,Y,cont=0;
	cin >> N >> X >> Y;
	vector<int> A(N);
	for(auto &a:A) cin >> a;
	if(X>Y)
		return !printf("%d\n",N);
	sort(all(A));
	reverse(all(A));
	int save=-1;
	for(int i = 0;i<N;i++)
		if(A[i]<=X){
			save=i;
			break;
		}
	if(save==-1) return puts("0");
	for(int i=save;i<N;i++){
		while(i<N and A[i]>X) i++;
		if(i==N) break;
		cont++;
		bool flag=false;
		for(int j=i+1;j<N;j++)
			if((A[j]+(j-i)*Y)>X){
				A[j]+=Y;
				flag=true;
				break;
			}
		if(!flag) A[N-1]+=Y;
	}
	cout << cont << '\n';
}



















