//Time limit exceeded
#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,A,max=1;
	cin >> N >> A;
	list<int> table;
	table.push_front(A);
	while(cin >> A){
	if(find(table.begin(),table.end(),A)!=table.end()){
			table.remove(A);
	}else{
		table.push_front(A);
		if(table.size()>max)
			max = table.size();
	}
	}
	cout << max << '\n';
}
