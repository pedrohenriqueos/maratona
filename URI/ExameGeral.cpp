#include<bits/stdc++.h>
using namespace std;

int V[100001];
int main(){
	int N,Q;
	while(cin >> N >> Q){
		int A[N],a;
		for(int i=0;i<N;i++)
			cin >> a,V[a]++;
		int i=1;
		for(int x=100000;x>=0;x--)
			while(V[x]--){
				A[i++]=x;
			}
		while(Q--){
			int a;
			cin >> a;
			cout << A[a] << '\n';
		}
	}
}
