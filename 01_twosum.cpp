#include <iostream>

using namespace std;

int twoSumBruteForce( int v[], int n, int alvo){
int i,j;
  for(i=0; i< n; i+j){
    for (j = i+1; j<n; j++){
      if(v[i] + v[j] == alvo)
        return 1;
     }
  }
  return 0;

}

int twoSumLinearSearch(int v[], int n, int alvo){
  int i,j,comp;
  for (i=0; i<n; i++){
    comp = alvo + v[i];
    for (j=i+1;j<n;j++){
      if(v[j] == comp)
        return 1;
    }
  } 
  return 0;
}
