#include<bits/stdc++.h>
using namespace std;

int dp[20][1000][2][10],out[10],s[2];
//varicoes apenas no retorno e no segundo parametro
int digitDP(int idx, int sum, int can, vector<int> &digit,int p){
	if(idx == (int)digit.size()) 
		return sum;
	if(dp[idx][sum][can][p] != -1)
		return dp[idx][sum][can][p];
	int ans = 0;
	for(int i = 0; i < 10; i++)
		if(can or i <= digit[idx]){
			ans =(ans+ digitDP(idx+1,sum+(i==p),can or i<digit[idx], digit,p));
		}
	return dp[idx][sum][can][p] = ans;
}

void query(int x,int v){
	memset(dp, -1, sizeof(dp));	
    vector<int> digit;
	if(x==0){
		digit.push_back(0);
	}
    while(x){
        digit.push_back(x%10);
        x /= 10;
    }
	if(v==1) s[1]=(int)digit.size();
	else s[0]=(int)digit.size();
    reverse(digit.begin(), digit.end());
    for(int i=0;i<10;i++){
		out[i]+=(digitDP(0,0,0,digit,i)*v);
	}
}
long long fast_expo(long long base,long long e){
	if(e==0) return 1;
	long long ans=fast_expo(base,e/2);
	ans= (ans*ans);
	if(e%2) ans=(ans*base);
	return ans;
}
int main(){
	int L,R;
	while(scanf("%d %d",&L,&R)){
		if(!L and !R) break;
		memset(out,0,sizeof out);
		query(R,1);
		query(L-1,-1);
		for(int i=0;i<10;i++){
			if(i!=0) printf(" ");
			if(i==0 and s[1]!=s[0]){
				int k=0;
				for(int j=s[1]-1;j>(s[0]-1);j--)
					k+=fast_expo(10,j);
				printf("%d",out[i]-k);
			}else
				printf("%d",out[i]);
		}
		printf("\n");
	}

}
