#define pi acos(-1)
#define fi first
#define se second
typedef pair<int,int> point;
 
const double EPS = 1e-9;
 
point reference;

double dist(point a){
	return (a.fi-reference.fi)*(a.fi-reference.fi)+(a.se-reference.se)*(a.se-reference.se);
}
double ang(point a){
	point _a = {a.fi-reference.fi,a.se-reference.se};
	//            retorno em radiano
	double anga = atan2(a.se,a.fi)*180.0/pi;
	if(anga<EPS and fabs(a.se)>EPS) anga+=360.0;
	return anga;
}
bool radialsort(point a,point b){
	double anga = ang(a), angb = ang(b);
	return ((fabs(anga-angb)<EPS)?dist(a)<dist(b):anga<angb);
}
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
int32_t main(){
	int n;
	cin >> n;
	vector<point> A(n);
	bool f1,f2;
	for(auto &a:A){
		a.fi=rng()%100,a.se=rng()%100;
		f1 = rng()%2,f2=rng()%2;
		if(!f1 and a.fi>EPS)
			a.fi*=-1;
		if(!f2 and a.se>EPS)
			a.se*=-1;
	}
	A.push_back({2,2});
	A.push_back({1,1});
	
	reference={0,0};
	
	sort(A.begin(),A.end(),radialsort);
	for(auto &a:A){
		point _a = {a.fi-reference.fi,a.se-reference.se};
		double anga = ang(_a);
		cout << _a.fi << " " << _a.se  <<" : " << anga << '\n';
	}
}
