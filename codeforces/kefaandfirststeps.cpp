#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	int A[N];
	for(int i=0;i<N;i++)
		cin >> A[i];
	int a=1,maior=1;
	for(int i=0;i<N;i++){
		if(a>maior)
			maior = a;
		if(A[i]<=A[i+1]){
			a++;
		}else
			a=1;
	}
	cout << maior << '\n';
}
