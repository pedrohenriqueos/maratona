#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define inf 0x3f3f3f3f
const long double EPS =1e-9;
int gauss (vector < vector<double> > a, vector<double> & ans) {
    int n = (int) a.size();
    int m = (int) a[0].size() - 1;

    vector<int> where (m, -1);
    for (int col=0, row=0; col<m && row<n; ++col) {
        int sel = row;
        for (int i=row; i<n; ++i)
            if (abs (a[i][col]) > abs (a[sel][col]))
                sel = i;
        if (abs (a[sel][col]) < EPS)
            continue;
        for (int i=col; i<=m; ++i)
            swap (a[sel][i], a[row][i]);
        where[col] = row;

        for (int i=0; i<n; ++i)
            if (i != row) {
                double c = a[i][col] / a[row][col];
                for (int j=col; j<=m; ++j)
                    a[i][j] -= a[row][j] * c;
            }
        ++row;
    }

    ans.assign (m, 0);
    for (int i=0; i<m; ++i)
        if (where[i] != -1)
            ans[i] = a[where[i]][m] / a[where[i]][i];
    for (int i=0; i<n; ++i) {
        double sum = 0;
        for (int j=0; j<m; ++j)
            sum += ans[j] * a[i][j];
        if (abs (sum - a[i][m]) > EPS)
            return 0;
    }

    for (int i=0; i<m; ++i)
        if (where[i] == -1)
            return inf;
    return 1;
}

int n,m,a;
int32_t main(){
	cin >> n >> m;
	vector<vector<double>> A(n,vector<double>(m));	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> A[i][j];
		}
	}
	vector<vector<double>> b(n,vector<double>(1));	
	for(int i=0;i<n;i++){
		cin >> b[i][0];
	}
	for(int i=0;i<n;i++){
		A[i].pb(b[i][0]);
	}
	vector<double> x;
	if(gauss(A,x)==1){
		for(int j=0;j<x.size();j++){
			cout << x[j] << '\n';
		}
		
	}
}









