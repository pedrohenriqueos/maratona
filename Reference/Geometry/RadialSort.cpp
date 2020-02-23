#include<bits/stdc++.h>
using namespace std;

#define pi acos(-1);
const double EPS = 1e-9;
using point = array<int,2>;

point reference;

double ang(point a){
	point _a = {a[0]-reference[0],a[1]-reference[1]};
	//            retorno em radiano
	double anga = atan2(_a[1],_a[0])*180.0/pi;
	if(anga<EPS and fabs(_a[1])>EPS) anga+=360.0;
	return anga;
}

long long dist(point a){
	return (a[0]-reference[0])*(a[0]-reference[0])+(a[1]-reference[1])*(a[1]-reference[1]);
}

int cross(point p,point q,point r){
	long long x = (1LL*(q[1]-p[1])*(r[0]-q[0]) - 1LL*(q[0]-p[0])*(r[1]-q[1]));
	x = ((x==0)?0:((x<0)?-1:1));
	return x;
}
bool half(point p){
	assert(p[0]!=0 or p[1]!=0);
	return p[1]>0 or (p[1]==0 and p[0]<0);
}
bool radialsort(point x,point y){
	point a = {x[0]-reference[0],x[1]-reference[1]};
	point b = {y[0]-reference[0],y[1]-reference[1]};
	if(a[0]==0 and a[1]==0) return false;
	if(b[0]==0 and b[1]==0) return true;
	return make_tuple(half(a),0,dist({x[0],x[1]})) < make_tuple(half(b),cross({0,0},a,b),dist({y[0],y[1]}));
}
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
int32_t main(){
	int n;
	cin >> n;
	vector<point> A(n);
	bool f1,f2;
	for(auto &a:A){
		a[0]=rng()%100,a[1]=rng()%100;
		f1 = rng()%2,f2=rng()%2;
		if(!f1 and a[0]>EPS)
			a[0]*=-1;
		if(!f2 and a[1]>EPS)
			a[1]*=-1;
	}
	A.push_back({2,2});
	A.push_back({1,1});
	
	reference={0,0};
	
	sort(A.rbegin(),A.rend(),radialsort);
	for(auto &a:A){
		double anga = ang(a);
		cout << a[0]-reference[0] << " " << a[1]-reference[1]  <<" : " << anga << '\n';
	}
}
