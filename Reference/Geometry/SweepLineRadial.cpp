//Esconde-Esconde -> URI Online Judge | 1497
#include<bits/stdc++.h>
using namespace std;

#define pi acos(-1)
#define fi first
#define se second
#define pb push_back
#define LIMITE_X 3000000

using point = array<int,2>;
using reta = pair<point,point>;
using event = array<int,4>;

inline int cross(point p,point q,point r){
	long long x = (1LL*(q[1]-p[1])*(r[0]-q[0]) - 1LL*(q[0]-p[0])*(r[1]-q[1]));
	x = ((x==0)?0:((x<0)?-1:1));
	return x;
}

inline bool checkinter(reta a,reta b){
	if(cross(a.fi,a.se,b.fi)*cross(a.fi,a.se,b.se)<=0 and
	cross(b.fi,b.se,a.fi)*cross(b.fi,b.se,a.se)<=0)
		return true;
	return false;
}

point reference;

inline long long dist(point a){
	return (a[0]-reference[0])*(a[0]-reference[0])+(a[1]-reference[1])*(a[1]-reference[1]);
}

inline bool half(point p){
	assert(p[0]!=0 or p[1]!=0);
	return p[1]>0 or (p[1]==0 and p[0]<0);
}

bool radialsort(event x,event y){
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

int s,k,w;
int32_t main(){
	while(scanf("%d %d %d",&s,&k,&w)!=EOF){
		vector<point> P(k);
		vector<event> Event;
		int pos=0;
		for(auto &a:P){
			scanf("%d %d",&a[0],&a[1]);
			Event.push_back({a[0],a[1],0,pos++});
		}
		int enu=0;
		vector<reta> Retas(w);
		for(auto &Reta:Retas){
			scanf("%d %d %d %d",&Reta.fi[0],&Reta.fi[1],&Reta.se[0],&Reta.se[1]);
			Event.pb({Reta.fi[0],Reta.fi[1],-1,enu});
			Event.pb({Reta.se[0],Reta.se[1],-1,enu});
			enu++;
		}
		vector<int> ans(s); // pontos que são visto pelo i-ésimo [0,s)
		for(int i=0;i<s;i++){
			reference = P[i];
			//rbegin(),rend(),para deixar os angulos crescentes
			sort(Event.rbegin(),Event.rend(),radialsort);
			set<int> wall;
			// Inicializa as paredes que existem ja no inicio, antes do 0°
			for(int j=0;j<w;j++){
				if(checkinter(Retas[j],{reference,{reference[0]+LIMITE_X,reference[1]}}))
					wall.insert(j);
			}
			//Sweep Line Radial
			for(auto ele:Event){
				if(ele[2]==-1){ //o elemento é uma parede
					if(wall.find(ele[3])==wall.end())
						wall.insert(ele[3]);
					else
						wall.erase(ele[3]);
				}else{ //o elemento é um objeto a ser verificado
					if(wall.empty() and (ele[0]!=reference[0] or ele[1]!=reference[1])){
						ans[i]++;
					}else if(!wall.empty() and (ele[0]!=reference[0] or ele[1]!=reference[1])){
						bool fl = true;
						reta x = {reference,{ele[0],ele[1]}};
						for(auto wallID:wall){
							if(checkinter(Retas[wallID],x)){
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
			printf("%d\n",ans[i]);//quantidade de elementos que são vistos pelo i-ésimo
	}
}
