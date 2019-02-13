#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,Q;
	while(cin >> N >> Q){
    	int A[N];
    	for(int x=0;x<N;x++)
    		cin >> A[x];
    	for(int i=0;i<N;i++)
			for(int j=1;j<N;j++)
				if(A[j]>A[j-1])
					swap(A[j],A[j-1]);
    	while(Q--){
    		int a;
    		cin >> a;
    		cout << A[a-1] << '\n';
    	}
	}
}
