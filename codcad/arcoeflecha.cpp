#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long ll;
ll merge(vector<ll> &A){
	ll inv=0;
	if(A.size()==1)
		return 0;
	vector<ll> u1,u2;
	for(int i=0;i<A.size()/2;i++)
		u1.push_back(A[i]);
	for(int i=A.size()/2;i<A.size();i++)
		u2.push_back(A[i]);
	inv+=merge(u1);
	inv+=merge(u2);
	u1.push_back(-1);
	u2.push_back(-1);
	int ini1=0,ini2=0;
	for(int i=0;i<A.size();i++){
		if(u1[ini1]>u2[ini2]){
			A[i]=u1[ini1];
			ini1++;
		}else{
			A[i]=u2[ini2];
			ini2++;
			inv+=u1.size()-ini1-1;
		}
	}
	return inv;
}

int main(){
	int N;
	ll a,b;
	vector<ll> A;
	cin >> N;
	while(N--){
		cin >> a >> b;
		A.pb((a*a)+(b*b));
	}
	ll saida = merge(A);
	cout << saida << '\n';
}
