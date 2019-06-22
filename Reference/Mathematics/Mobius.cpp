const int MAXN=5e5; 
int mob[MAXN+1];
bool vist[MAXN+1];

inline void mobius(){
	for(int i = 1; i < MAXN; i++)
		mob[i] = 1;
	for(int i = 2; i < MAXN; i++){
		if(vist[i]) continue;
		for(int j = i; j < MAXN; j += i){
			vist[j] = true;
			mob[j] *= -1;
			if((j/i)%i==0)
				mob[j] = 0;
		}
	}
}



















