#define x first
#define y second.first
#define z second.second

typedef pair<double,pair<double,double> > point;
const double EPS = 1e-9;
//[x,y,1] -> ponto
//[x,y,z] -> reta

// a*x+b*y+c*z=0

point reta(point a,point b){
	point resp;
	resp.x = a.y*b.z-a.z*b.y;
	resp.y = a.z*b.x-a.x*b.z;
	resp.z = a.x*b.y-a.y*b.x;
	return resp;
}
point intercessao(point a,point b){
	point i = reta(a,b);
	if(fabs(i.z)>EPS){//reduz ao ponto, i.z==0 -> retas paralelas
		i.x/=i.z;
		i.y/=i.z;
		i.z/=i.z;
	}
	return i;
}
reta1 = reta(p1,p2);
reta2 = reta(p3,p4);
inter = intercessao(reta1,reta2);

//se existe intercessao entre as retas
//                    intercessao,reta1={p1,p2},reta2={p2,p3}
bool checkintercessao(reta inter,reta p1,reta p2,reta p3,reta p4){
	return (inter.z>EPS and inter.y>=min(p1.y,p2.y) and inter.y<=max(p1.y,p2.y) and inter.x>=min(p1.x,p2.x) and inter.x<=max(p1.x,p2.x) and inter.y>=min(p3.y,p4.y) and inter.y<=max(p3.y,p4.y) and inter.x>=min(p3.x,p4.x) and inter.x<=max(p3.x,p4.x));
}


