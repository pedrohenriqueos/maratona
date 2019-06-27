#define int long long
struct matrix{
	int n,m;
	vector<vector<int>>M;
	matrix(int _n,int _m){
		n = _n;
		m = _m;
		M = vector<vector<int>>(n,vector<int> (m));
	}
	matrix friend operator*(const matrix &m1,const matrix &m2){
		matrix result(m1.n,m2.m);
		for(int i=0;i< m1.n;i++)
			for(int j=0;j<m2.m;j++)
				for(int k=0;k<m1.m;k++)
					result.M[i][j] +=(m1.M[i][k]*m2.M[k][j]); // MOD
		return result;
	}
	matrix operator^(int exp){
		matrix resp(n,m);
		for(int i = 0; i<n ;i++) resp.M[i][i] = 1;
		matrix aux(n,m);
		aux.M = M;
		while(exp){
			if(exp&1) resp = resp*aux,exp--;
			else aux = aux*aux,exp/=2;
		}
		return resp;
	}
	void print(){
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++)
				printf("%lld ",M[i][j]);
			puts("");
		}
	}
};
int32_t main(){
	matrix base(2,2);
	base.M[0][1] = base.M[1][0] = base.M[1][1] = 1;
	matrix Fib(2,1);
	Fib.M[0][0] = 1;//0 - base de Fib
	Fib.M[1][0] = 1;
	for(int i=0;i<=10;i++){
		matrix f = base^i;
		matrix fib = f*Fib;
		printf("%lld: %lld\n",i,fib.M[0][0]);
	}
	
}
