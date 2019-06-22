int A[N+1][N+1],pd[N+1][N+1];
for(int i=1;i<=N;i++)
	for(int j=1;j<=N;j++){
		scanf("%lld",&A[i][j]);
		pd[i][j]=pd[i][j-1]+A[i][j];
	}    
int ans=0;
for(int i=1;i<=N;i++)
	for(int j=i+1;j<=N;j++){
		int sum=0;
		for(int k=1;k<=N;k++){
			sum += pd[k][j] - pd[k][i-1];
			if(sum<0) sum = 0;
			ans = max(ans, sum);
		}
	}
