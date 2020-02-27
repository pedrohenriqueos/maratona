#include<bits/stdc++.h>
using namespace std;

#define pi acos(-1);
const double EPS = 1e-9;
using point = array<int,2>;

point reference;

inline double ang(point a){
	point _a = {a[0]-reference[0],a[1]-reference[1]};
	//            retorno em radiano
	double anga = atan2(_a[1],_a[0])*180.0/pi;
	if(anga<EPS and fabs(_a[1])>EPS) anga+=360.0;
	return anga;
}

inline long long dist(point a){
	return (a[0]-reference[0])*(a[0]-reference[0])+(a[1]-reference[1])*(a[1]-reference[1]);
}

inline int cross(point p,point q,point r){
	long long x = (1LL*(q[1]-p[1])*(r[0]-q[0]) - 1LL*(q[0]-p[0])*(r[1]-q[1]));
	x = ((x==0)?0:((x<0)?-1:1));
	return x;
}
inline bool half(point p){
	assert(p[0]!=0 or p[1]!=0);
	return p[1]>0 or (p[1]==0 and p[0]<0);
}
bool radialsort(point x,point y){
	point a = {x[0]-reference[0],x[1]-reference[1]};
	point b = {y[0]-reference[0],y[1]-reference[1]};
	if(a[1]==0 and a[0]>=0 and b[1]==0 and b[0]>=0)
		return -dist({x[0],x[1]}) < -dist({y[0],y[1]});
	if(a[1]==0 and a[0]>=0) return false;
	if(b[1]==0 and b[0]>=0) return true;
	if(half(a)==half(b))
		if(cross({0,0},a,b)==0)
			return -dist({x[0],x[1]}) < -dist({y[0],y[1]});
		else
			return 0<cross({0,0},a,b);
	return half(a)<half(b);
}

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
int32_t main(int argc, char *argv[]){
	int n = atoi(argv[1]);
	vector<point> A;
	bool f1,f2;
	for(int i=-n;i<=n;i++)
		for(int j=-n;j<=n;j++)
			A.push_back({i,j});
	reference={0,0};
	
	sort(A.rbegin(),A.rend(),radialsort);
	for(auto &a:A){
		//double anga = ang(a);
		printf("%d %d\n",a[0]-reference[0],a[1]-reference[1]);
	}
}
