#include <bits/stdc++.h>

using namespace std;
long long n;
vector <long long> v;
int main()
{
    cin >> n;
    long long sum = 1;
    v.resize(n);
    for (long i = 0;i < n;i++){
        cin >> v[i];
        sum += v[i];
    }
    sum /= 2;
    long long temp = 0;
    for (long i = 0;i < n;i++){
        temp += v[i];
        if (temp >= sum){
            cout << i+1 << '\n';
            return 0;
        }
    }
    return 0;
}
