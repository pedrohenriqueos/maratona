/*#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	while(cin >> N){
		if(N==0)
			break;
		int A,B,C,D,E;
		for(int n=0;n<N;n++){
			cin >> A >> B >> C >> D >> E;
			(A<=127 and B>127 and C>127 and D>127 and E>127) ? cout<<"A\n" :
			(A>127 and B<=127 and C>127 and D>127 and E>127) ? cout<<"B\n" :
			(A>127 and B>127 and C<=127 and D>127 and E>127) ? cout<<"C\n" :
			(A>127 and B>127 and C>127 and D<=127 and E>127) ? cout<<"D\n" :
			(A>127 and B>127 and C>127 and D>127 and E<=127) ? cout<<"E\n" :
														       cout <<"*\n";
		}
	}
}*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,A;
	while(cin >> N and N){
		pair<int,char> S[2];
		while(N--){
		S[0].first=S[1].second=0;
		for(int i=0;i<5;i++){
			cin >> A;
			A=(A>127)?1:0;
			if(S[A].first==0){
				S[A].second=
			(i==0)?'A':(i==1)?'B':(i==2)?'C':(i==3)?'D':'E';	
			}
			S[A].first++;	
		}
		if(S[0].first==1)
			cout << S[0].second<< '\n';
		else if(S[1].first==1)
			cout << S[1].second<< '\n';
		else
			cout << "*\n";
		}
	}


}
