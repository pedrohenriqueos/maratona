#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,M,a;
	cin >> N >> M;
	int At[N+1];
	memset(At,0,sizeof(At));
	priority_queue< pair<int,int> , vector< pair<int,int> >, greater< pair<int,int> > > P;
	for(int i=1;i<=N;i++)
		P.push(make_pair(0,i));
	while(M--){
		scanf("%d",&a);
		pair<int,int> atendente = P.top();
		P.pop();
		atendente.first+=a;
		At[atendente.second]++;
		P.push(atendente);
	}
	for(int i=1;i<=N;i++)
		cout << i << " " << At[i] << '\n';
}
