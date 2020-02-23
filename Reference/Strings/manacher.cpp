string str;
int n;
int lps[1000000];
string manacher(){
    pair<int,int> inisz={0,1};
    int k=0,r=0;
    for(int i=1;i<n;i++){ // De tamanho impar
        lps[i] = 1;
        if(r>i)
            lps[i] = min(lps[2*k-i],r-i);
        while(i-lps[i]>=0 and i+lps[i]<n and str[i-lps[i]]==str[i+lps[i]])
            lps[i]++;
        lps[i]--;
        int ini = i-lps[i],sz = 2*lps[i]+1;
        if(inisz.second<sz){
            inisz = {ini,sz};
        }
        if(i+lps[i]>r){
            k = i;
            r = i+lps[i];
        }
    }
    k=r=0;
    memset(lps,0,sizeof lps);
    for(int i=0;i<n-1;i++){ // De tamanho par
        lps[i] = 0;
        if(r>i)
            lps[i] = min(lps[2*k-i],r-i);
        while(i-lps[i]>=0 and i+lps[i]+1<n and str[i-lps[i]]==str[i+lps[i]+1])
            lps[i]++;
        lps[i]--;
        int ini = i-lps[i],sz = 2*(lps[i]+1);
        if(inisz.second<sz){
            inisz = {ini,sz};
        }
        if(i+lps[i]>r){
            k = i;
            r = i+lps[i];
        }
    }
    return str.substr(inisz.first,inisz.second);
}
