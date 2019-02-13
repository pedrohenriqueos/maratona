#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	double soma=0;
	cin >> N;
	for(int n=0;n<N;n++){
		int x1,y1,x2,y2;
		cin >> x1 >> y1 >> x2 >> y2;
		double dist = hypot((x2-x1),(y2-y1));
		soma+=(dist*dist);
	}
	cout << fixed << setprecision(0) << soma << '\n';
}
