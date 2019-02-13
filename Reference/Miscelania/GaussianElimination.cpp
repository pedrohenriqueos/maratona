int N,T,K;
int msb(ull a){
    int i;
    for(i=0;a;i++)
        a>>=1;
    return i;
}
int main(){
    cin >> T;
    while(T--){
        cin >> N >> K;
        vull A(N),S,B[70];
        for(auto &a:A){
            cin >> a;
            B[msb(a)].pb(a);
        }
        FORI(i,64,1){
            if(B[i].size()!=0){
                FOR(j,1,B[i].size())
                    B[msb((B[i][0]^B[i][j]))].pb((B[i][0]^B[i][j]));   
                S.pb(B[i][0]);
            }
        }
        ull saida=K;
        FOR(i,1,1<<S.size()){
            ull aux=K;
            REP(j,S.size())
                if(i&(1LL<<j)) aux^=S[j];
            saida=max(saida,aux);
        }
        cout << saida << '\n';
    }
}
