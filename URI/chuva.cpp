#include <bits/stdc++.h>
using namespace std;

int main(){
   int N;
   cin >> N;
   int mat1[N][N],mat2[N][N];
   for(int i=0;i<N;i++)
      for(int j=0;j<N;j++)
         cin >> mat1[i][j];
   for(int i=0;i<N;i++)
      for(int j=0;j<N;j++)
         cin >> mat2[i][j];
   for(int i=0;i<N;i++)
      for(int j=0;j<N;j++){
         cout << mat1[i][j] + mat2[i][j];
         if(j==N-1)
         cout << "\n";
         else
         cout << " ";
      }
   return 0;
}
