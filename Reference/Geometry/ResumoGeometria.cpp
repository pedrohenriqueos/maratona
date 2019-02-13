//Distancia entre dois pontos
double dist=sqrt((X1-X2)*(X1-X2)+(Y1-Y2)*(Y1-Y2));

//Equacao da Circunferencia (Centro (a,b) e Raio r)
(x-a)^2+(y-b)^2=r^2

//Check se um circulo esta dentro do outro
if(dist<=(R1-R2))

//Check se um circulo esta fora do outro
if(dist>=(R1+R2))

//Condicao de existencia de um triangulo de lados A,B,C
if((abs(A-B)<C and C<(A+B)) and (abs(A-C)<B and B<(A+C)) and (abs(B-C)<A and A<(B+C)))

//Formulas para um triangulo com lados a,b,c
   Semi-Perimetro => p = (a+b+c)/2
             Area => A = sqrt(p(p-a)(p-b)(p-c))
             Area => A = bc.sin(alpha)/2
           Altura => h = 2A/b
    Raio Inscrito => r = A/p
Raio Curcunscrito => R = (abc)/(4A)
