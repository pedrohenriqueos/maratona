const int mod = 1e9+7;
// (base^exp)%mod
int fast_expo(int base,int exp){
	if(exp==0) return 1;
	if(exp==1) return base;
	int ans=fast_expo(base,exp/2);
	ans= (ans*ans)%mod;
	if(exp&1) ans=(ans*base)%mod;
	return ans;
}
