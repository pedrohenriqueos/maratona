#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	while(cin >> N){
		if(N==0)
			break;
	list<int> pilha1;
	for(int i=N;i>=1;i--)
		pilha1.push_front(i);
	int j=1;
	cout << "Discarded cards: ";
	while(pilha1.size()!=1){
		if(j%2==1){
			cout << pilha1.front();
			pilha1.pop_front();
			if(pilha1.size()>1)
				cout << ", ";
			else
				cout << '\n';
		}else{
			pilha1.push_back(pilha1.front());
			pilha1.pop_front();
		}
		j++;
	}
	cout << "Remaining card: " << pilha1.front() << '\n';
	}
}
