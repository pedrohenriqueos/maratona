#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,a,out=0;
    cin >> N;
    vector<int> A;
    A.assign(102,0);
    for(int n=0;n<N;n++){
        cin >> a,A[a]++;
        out=max(out,A[a]);
    }
    cout << out << '\n';
}
