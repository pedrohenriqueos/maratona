#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	while(cin >> N){
		if(N==0)
			break;
	int M[N],L[N],quantm=0,quantl=0,sm=0,sl=0;
	bool s=true;
	for(int i=0;i<N;i++)
		cin >> M[i];
	for(int i=0;i<N;i++)
		cin >> L[i];
	int um=M[0],ul=L[0];
	for(int i=0;i<N;i++){
		sm+=M[i];
		sl+=L[i];
		if(um==M[i])
			quantm++;
		else{
			um=M[i];
			quantm=1;	
		}
		if(ul==L[i])
			quantl++;
		else{
			ul=L[i];
			quantl=1;
		}
		if(quantm==3 and quantl!=3 and s){
			sm+=30;
			s=false;
		}
		else if(quantl==3 and quantm!=3 and s){
			sl+=30;
			s=false;
		}
		else if(quantm==3 and quantl==3){
			quantm=0;
			quantl=0;
			s = false;
		}	
	}
	(sm>sl) ? cout << "M\n" : (sl>sm) ? cout << "L\n" : cout << "T\n";
	}	
}
