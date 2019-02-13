for(int i=1;i<=N;i++)
	for(int j=1;j<=M;j++){
		scanf("%d",&A[i][j]);
		dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+A[i][j];
		for(int k=0;k<j;k++)
			for(int l=0;l<i;l++)
				saida=max(saida,dp[i][j]-dp[i][k]-dp[l][j]+dp[l][k]); 
	}

