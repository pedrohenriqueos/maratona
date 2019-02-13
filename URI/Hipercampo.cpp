#include<iostream>
#include<algorithm>
#include<map>
#include<cstring>
using namespace std;

#define x first
#define y second.first
#define z second.second

typedef pair<double,pair<double,double> > point;

int N,v;
point A[120],X1,X2;
int pd[120][120];
map<point,int> Map;
pair< map<point,int>::iterator, bool > r;
bool cmp(point a,point b){
	return a.y<b.y;
}

point reta(point a,point b){
	point resp;
	resp.x = a.y*b.z-a.z*b.y;
	resp.y = a.z*b.x-a.x*b.z;
	resp.z = a.x*b.y-a.y*b.x;
	return resp;
}

point interc(point a,point b){
	point i = reta(a,b);
	if(i.z!=0){
		i.x/=i.z;
		i.y/=i.z;
		i.z/=i.z;
	}
	return i;
}
bool check(point p1,point p2){
	point reta1 = reta(p1,X1);
	point reta2 = reta(p1,X2);
	point reta3 = reta(p2,X1);
	point reta4 = reta(p2,X2);
	//cout << reta1.x << " " << reta1.y << " " << reta1.z << '\n';
	//cout << reta4.x << " " << reta4.y << " " << reta4.z << '\n';
	//cout << reta2.x << " " << reta2.y << " " << reta2.z << '\n';
	//cout << reta3.x << " " << reta3.y << " " << reta3.z << '\n';
	//cout << "*\n";
	point interc1 = interc(reta1,reta4);
	point interc2 = interc(reta2,reta3);
	//cout << p1.x << " " << p1.y << " " << p1.z << '\n';
	//cout << p2.x << " " << p2.y << " " << p2.z << '\n';
	//cout << interc2.x << " " << interc2.y << " " << interc2.z << '\n';
	
	if(interc1.y>0.0 and interc1.y<min(p1.y,p2.y) and interc1.x>min(p1.x,p2.x) and interc1.x<max(p1.x,p2.x))
		return false;
	if(interc2.y>0.0 and interc2.y<min(p1.y,p2.y) and interc2.x>min(p1.x,p2.x) and interc2.x<max(p1.x,p2.x))
		return false;
	return true;
}

int dp(int id,point last){
	if(id>=N) return 0;
	if(pd[id][Map[last]]!=-1) return pd[id][Map[last]];
	if(check(A[id],last))
		return pd[id][Map[last]] = max(dp(id+1,A[id])+1,dp(id+1,last));
	return pd[id][Map[last]] = dp(id+1,last);
}

int main(){
	memset(pd,-1,sizeof pd);
	scanf("%d %lf %lf",&N,&X1.x,&X2.x);
	X1.y=X2.y=0;
	X1.z=X2.z=1;
	for(int i=0;i<N;i++){
		scanf("%lf %lf",&A[i].x,&A[i].y);
		A[i].z=1;
		r=Map.insert({A[i],v});
		if(r.second) v++;
	}
	sort(A,A+N,cmp);
	point a;
	a.x=(X1.x+X2.x)/2.0;
	a.y=0;
	a.z=1;
	Map.insert({a,v});
	printf("%d\n",dp(0,a));
}






