#include<bits/stdc++.h>
using namespace std;

int V[502];
int main(){
	int J,R,a;
	cin >> J >> R;
	for(int i=0;i<R;i++)
		for(int j=0;j<J;j++)
			cin >> a,V[j]+=a;
	pair<int,int> out={0,J};
	for(int i=J-1;i>=0;i--)
		if(V[i]>out.first)
			out={V[i],i+1};
	cout << out.second << '\n';
}
