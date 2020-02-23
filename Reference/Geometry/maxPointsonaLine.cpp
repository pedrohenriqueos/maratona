using point = array<int,2>;
point reference;
point normalised(point a){
    a[0]-=reference[0];
    a[1]-=reference[1];
    int g = max(__gcd(abs(a[0]),abs(a[1])),1);
    return {a[0]/g,a[1]/g};
}
int maxPointsonLine(vector<point> &Points){
   if(Points.size()<=2)
        return Points.size();
    int ans = 0;
    for(auto Point:Points){
        vector<point> aux;
        reference = Point;
        for(auto p:Points)
            aux.push_back(normalised(p));
        sort(aux.begin(),aux.end());
        point ref = aux[0];
        int cnt = 0, count =0;
        point zero ={0,0};
        for(int i=0;i<aux.size();i++){
            if(aux[i]==zero)
                count++;
            else{
                if(aux[i]==ref)
                    cnt++;
                else{
                    ans = max(ans,cnt+count);
                    ref = aux[i];
                    cnt = 1;
                }
           }
        }
        ans = max(ans,cnt+count);
    }
    return ans;
}
