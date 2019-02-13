#include<bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
#define pi acos(-1)
#define f first
#define s second
#define pb push_back
#define all(a) a.begin(),a.end()
#define db(a) cerr << #a << " = " << a << '\n';
#define _ << " , " << 
#define double long double
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
const double MOD = 1e-11;
const double MOD2 = 1e-7;
int32_t main(){
	int T;
	scanf("%d",&T);
	while(T--){
		double N;
		pair<double,double> out;
		bool flag=false;
		scanf("%Lf",&N);
		if(N==0){
			printf("Y 0.00000000 0.00000000\n");
			continue;
		}
		double l=0.0-MOD,r=2.0+MOD;
		while((r-l)>=MOD){
			double mid = (r+l)/2.0;
			//printf("mid = %.9Lf\n",mid);
			if(fabs((N-mid)*mid-N)<=MOD2){
				out.f= N-mid,out.s=mid;
				flag=true;
				break;
			}else if((N-mid)*mid>N)
				r=mid;
			else
				l=mid;
		}
		if(flag){
			printf("Y %.9Lf %.9Lf\n",out.f,out.s);
		}else
			printf("N\n");
	}
}



















