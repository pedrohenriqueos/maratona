#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	for(int i=0;i<N;i++){
		int A,B;
		cin >> A;
		string S[A];
		float P[A];
		for(int j=0;j<A;j++)
			cin >> S[j] >> P[j];
		cin >> B;
		string S1[B];
		int P1[B];
		float Saida=0;
		for(int j=0;j<B;j++)
			cin >> S1[j] >> P1[j];
		for(int b=0;b<B;b++)
			for(int a=0;a<A;a++)
				if(S1[b]==S[a])
					Saida += P[a]*P1[b];
		cout << fixed << setprecision(2) << "R$ " << Saida << '\n'; 	
		
	}
}
