#include<bits/stdc++.h>
using namespace std;

int main(){
	int A,B,C;
	cin >> A >> B >> C;
	if(abs(A-C)<B and B<A+C and abs(A-B)<C and C<A+B and abs(B-C)<A and A<B+C){
		int hipo=max(A,max(B,C)),cat1=min(A,min(B,C));
		int cat2= A+B+C-hipo-cat1;
		hipo*=hipo;
		cat1*=cat1;
		cat2*=cat2;
		if(hipo==cat1+cat2)
			cout << "r\n";
		else if(hipo>cat1+cat2)
			cout << "o\n";
		else
			cout << "a\n";
	}else
		cout << "n\n";

}
