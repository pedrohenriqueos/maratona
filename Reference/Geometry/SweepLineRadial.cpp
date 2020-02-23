//Esconde-Esconde -> URI Online Judge | 1497
#include<bits/stdc++.h>
using namespace std;

#define pi acos(-1)
#define fi first
#define se second
#define pb push_back
#define int long long
#define x fi
#define y se.fi
#define z se.se

typedef pair<int,int> point;
typedef pair<double,pair<double,double>> reta;

const double EPS = 1e-9;

reta Reta(reta a,reta b){
	reta resp;
	resp.x = a.y*b.z-a.z*b.y;
	resp.y = a.z*b.x-a.x*b.z;
	resp.z = a.x*b.y-a.y*b.x;
	return resp;
}
reta intercessao(reta a,reta b){
	reta i = Reta(a,b);
	if(fabs(i.z)>EPS){//reduz ao ponto, i.z==0 -> retas paralelas
		i.x/=i.z;
		i.y/=i.z;
		i.z/=i.z;
	}
	return i;
}
//                    intercessao,reta1={p1,p2},reta2={p2,p3}
bool checkintercessao(reta inter,reta p1,reta p2,reta p3,reta p4){
	return (inter.z>EPS and inter.y>=min(p1.y,p2.y) and inter.y<=max(p1.y,p2.y) and inter.x>=min(p1.x,p2.x) and inter.x<=max(p1.x,p2.x) and
	inter.y>=min(p3.y,p4.y) and inter.y<=max(p3.y,p4.y) and inter.x>=min(p3.x,p4.x) and inter.x<=max(p3.x,p4.x));
}

point reference;

double dist(point a){
	return (a.fi-reference.fi)*(a.fi-reference.fi)+(a.se-reference.se)*(a.se-reference.se);
}
double ang(point a){
	point _a = {a.fi-reference.fi,a.se-reference.se};
	double anga=atan2(_a.se,_a.fi)*180.0/pi;
	if(anga<EPS and fabs(_a.se)>EPS) anga+=360.0;
	return anga;
}

bool radialsort(pair<point,pair<int,int>> a,pair<point,pair<int,int>> b){
	double anga = ang(a.fi), angb = ang(b.fi);
	return ((fabs(anga-angb)<EPS)?dist(a.fi)<dist(b.fi):anga<angb);
}

double angV(point a){ // O menor angulo entre o ponto e a referencia
	point _a = {a.fi-reference.fi,a.se-reference.se};
	double anga=atan2(_a.se,_a.fi)*180.0/pi;
	return anga;
}

int s,k,w;
int32_t main(){
	while(scanf("%lld %lld %lld",&s,&k,&w)!=EOF){
		vector<pair<point,pair<int,int>>> P(s),Event(k-s);
		int pos=0;
		for(auto &a:P)
			scanf("%lld %lld",&a.fi.fi,&a.fi.se),a.se.fi=pos++,a.se.se=0;
		for(auto &a:Event)
			scanf("%lld %lld",&a.fi.fi,&a.fi.se),a.se.fi=pos++,a.se.se=0;
		for(auto &a:P) Event.pb(a);
		point s1,s2;
		int enu=0;
		pair<point,point> RetaPoints[w];
		vector<reta> Retas(w);
		for(int i=0;i<w;i++){
			scanf("%lld %lld %lld %lld",&s1.fi,&s1.se,&s2.fi,&s2.se);
			Event.pb({s1,{enu,-1}});
			Event.pb({s2,{enu,-1}});
			reta point1 = {s1.fi, {s1.se, 1.0} }, point2 = {s2.fi, {s2.se, 1.0} };
			Retas[i] = Reta(point1,point2);
			RetaPoints[i] = {s1,s2};
			enu++;
		}
		vector<int> ans(k); // pontos que são visto pelo i-ésimo [0,k)
		for(int i=0;i<s;i++){
			reference = P[i].fi;
			reta p1 = {P[i].fi.fi, {P[i].fi.se, 1.0} };
			sort(Event.begin(),Event.end(),radialsort);
			set<int> wall;
			
			// Inicializa as paredes que existem ja no inicio, antes do 0°
			for(int j=0;j<w;j++){
				double v1 = angV(RetaPoints[j].fi);
				double v2 = angV(RetaPoints[j].se);
				if(((v1<EPS and fabs(v1)>EPS) or (v2<EPS and fabs(v2)>EPS)) and (v1>EPS or v2>EPS) and (fabs(v1)+fabs(v2)<180.0))
					wall.insert(j);
			}
			
			//Sweep Line Radial
			for(auto ele:Event){
				if(ele.se.se==-1){ //o elemento é uma parede
					if(wall.find(ele.se.fi)==wall.end())
						wall.insert(ele.se.fi);
					else
						wall.erase(ele.se.fi);
				}else{ //o elemento é um objeto a ser verificado
					if(wall.empty() and (ele.fi.fi!=reference.fi or ele.fi.se!=reference.se)){
						ans[i]++;
					}else if(!wall.empty() and (ele.fi.fi!=reference.fi or ele.fi.se!=reference.se)){
						bool fl = true;
						reta p2 = {ele.fi.fi, {ele.fi.se, 1.0} };
						reta X = Reta(p1,p2);
						reta inter;
						reta p3,p4;
						for(auto wallID:wall){
							inter = intercessao(X,Retas[wallID]);
							p3 = {RetaPoints[wallID].fi.fi, {RetaPoints[wallID].fi.se, 1.0} }, p4 = {RetaPoints[wallID].se.fi, {RetaPoints[wallID].se.se, 1.0} };
							if(checkintercessao(inter,p1,p2,p3,p4)){
								fl=false;
								break;
							}
						}
						if(fl)
							ans[i]++;
					}
				}
			}	
		}
		for(int i =0;i<s;i++)
			printf("%lld\n",ans[i]);//quantidade de elementos que são vistos pelo i-ésimo
	}
}
