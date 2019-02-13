const int mod = 1e9;
// (b^e)%mod
long long fast_expo(long long base,long long e){
	if(e==0) return 1;
	ll ans=fast_expo(base,e/2);
	ans= (ans*ans)%mod;
	if(e%2) ans=(ans*base)%mod;
	return ans;
}
