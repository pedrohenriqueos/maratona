#include<bits/stdc++.h>
using namespace std;

int main(){
	string S;
	map<string,string> s;
	s.insert(pair<string,string>("brasil","Feliz Natal!"));
	s.insert(pair<string,string>("alemanha","Frohliche Weihnachten!"));
	s.insert(pair<string,string>("austria","Frohe Weihnacht!"));
	s.insert(pair<string,string>("coreia","Chuk Sung Tan!"));
	s.insert(pair<string,string>("espanha","Feliz Navidad!"));
	s.insert(pair<string,string>("grecia","Kala Christougena!"));
	s.insert(pair<string,string>("estados-unidos","Merry Christmas!"));
	s.insert(pair<string,string>("inglaterra","Merry Christmas!"));
	s.insert(pair<string,string>("australia","Merry Christmas!"));
	s.insert(pair<string,string>("portugal","Feliz Natal!"));
	s.insert(pair<string,string>("suecia","God Jul!"));
	s.insert(pair<string,string>("turquia","Mutlu Noeller"));
	s.insert(pair<string,string>("argentina","Feliz Navidad!"));
	s.insert(pair<string,string>("chile","Feliz Navidad!"));
	s.insert(pair<string,string>("mexico","Feliz Navidad!"));
	s.insert(pair<string,string>("antardida","Merry Christmas!"));
	s.insert(pair<string,string>("canada","Merry Christmas!"));
	s.insert(pair<string,string>("irlanda","Nollaig Shona Dhuit!"));
	s.insert(pair<string,string>("belgica","Zalig Kerstfeest!"));
	s.insert(pair<string,string>("italia","Buon Natale!"));
	s.insert(pair<string,string>("libia","Buon Natale!"));
	s.insert(pair<string,string>("siria","Milad Mubarak!"));
	s.insert(pair<string,string>("marrocos","Milad Mubarak!"));
	s.insert(pair<string,string>("japao","Merii Kurisumasu!"));
	while(cin>>S){
		if(s.find(S)!=s.end())
			cout << s[S] << '\n';
		else 
			cout << "--- NOT FOUND ---\n";
	}
}
