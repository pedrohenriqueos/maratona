int pref[n][m],arr[n][m];
void build(){
	pref[1][1] = arr[1][1];
	for(int i=2;i<=m;i++)
		pref[1][i] = pref[1][i-1]+arr[1][i];
	for(int i=2;i<=n;i++)
		pref[i][1] = pref[i-1][1]+arr[i][1];
	for(int i=2;i<=n;i++)
		for(int j=2;j<=m;j++)
			pref[i][j] = pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1]+arr[i][j];
}
