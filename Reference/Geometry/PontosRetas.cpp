#define x first
#define y second.first
#define z second.second

typedef pair<double,pair<double,double> > point;

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
	if(i.z!=0){//reduz ao ponto, i.z==0 -> retas paralelas
		i.x/=i.z;
		i.y/=i.z;
		i.z/=i.z;
	}
	return i;
}
reta1 = reta(p1,p2);
intercessao1= intercessao(reta1,reta2);

//se existe intercessao no intervalor p1 p2
if(intercessao1.y>0.0 and intercessao1.y<min(p1.y,p2.y) and 
intercessao1.x>min(p1.x,p2.x) and intercessao1.x<max(p1.x,p2.x))


