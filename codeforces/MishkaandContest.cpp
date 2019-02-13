#include<bits/stdc++.h>
using namespace std;

int main(){
	int N,K,a;
	cin >> N >> K;
	deque<int> q;
	for(int x=0;x<N;x++){
		cin >> a;
		q.push_back(a);
	}
	int out=0;
	while(out!=N){
		if(q.front()<=K){
			out++;
			q.pop_front();
		}else if(q.back()<=K){
			out++;
			q.pop_back();
		}else
			break;
	}
	cout << out << '\n';
}
