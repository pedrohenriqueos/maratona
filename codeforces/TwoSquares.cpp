#include<bits/stdc++.h>
using namespace std;

double EPS = 1e-12;
struct PT { 
  double x, y; 
  PT() {}
  PT(double x, double y) : x(x), y(y) {}
  PT(const PT &p) : x(p.x), y(p.y)    {}
  PT operator + (const PT &p)  const { return PT(x+p.x, y+p.y); }
  PT operator - (const PT &p)  const { return PT(x-p.x, y-p.y); }
  PT operator * (double c)     const { return PT(x*c,   y*c  ); }
  PT operator / (double c)     const { return PT(x/c,   y/c  ); }
};
//se existe intercessao no intervalor p1 p2
double dot(PT p, PT q)     { return p.x*q.x+p.y*q.y; }
double dist2(PT p, PT q)   { return dot(p-q,p-q); }
double cross(PT p, PT q)   { return p.x*q.y-p.y*q.x; }
PT RotateCCW90(PT p)   { return PT(-p.y,p.x); }
PT RotateCW90(PT p)    { return PT(p.y,-p.x); }
PT RotateCCW(PT p, double t) { 
  return PT(p.x*cos(t)-p.y*sin(t), p.x*sin(t)+p.y*cos(t)); 
}

bool LinesParallel(PT a, PT b, PT c, PT d) { 
  return fabs(cross(b-a, c-d)) < EPS; 
}
bool LinesCollinear(PT a, PT b, PT c, PT d) { 
  return LinesParallel(a, b, c, d)
      && fabs(cross(a-b, a-c)) < EPS
      && fabs(cross(c-d, c-a)) < EPS; 
}

// determine if line segment from a to b intersects with 
// line segment from c to d
bool SegmentsIntersect(PT a, PT b, PT c, PT d) {
  if (LinesCollinear(a, b, c, d)) {
    if (dist2(a, c) < EPS || dist2(a, d) < EPS ||
      dist2(b, c) < EPS || dist2(b, d) < EPS) return true;
    if (dot(c-a, c-b) > 0 && dot(d-a, d-b) > 0 && dot(c-b, d-b) > 0)
      return false;
    return true;
  }
  if (cross(d-a, b-a) * cross(c-a, b-a) > 0) return false;
  if (cross(a-c, d-c) * cross(b-c, d-c) > 0) return false;
  return true;
}
int main(){
	vector<PT> v,v2;
	for(int i=0;i<4;i++){
		double a,b;
		cin >> a >> b;
		v.push_back(PT(a,b));
	}
	for(int i=0;i<4;i++){
		double a,b;
		cin >> a >> b;
		v2.push_back(PT(a,b));
	}
	for(int i=1;i<4;i++)
		for(int j=1;j<4;j++){
			if(SegmentsIntersect(v[i-1],v[i],v2[i-1],v2[i]))
				return puts("YES");
		}
	if(SegmentsIntersect(v[0],v[3],v2[0],v2[3]))
				return puts("YES");
	puts("NO");
}
