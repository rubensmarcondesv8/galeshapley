#include <iostream>
#include <fstream>
#include <queue>

int main(){
  unsigned n = 5
  unsigned **hPref;
  unsigned **sPref;

  unsigned *M;
  unsigned *S;

  hPref = (unsigned**)malloc(n * sizeof(unsigned*));
  sPref = (unsigned**)malloc(n * sizeof(unsigned*));

  M = (unsigned*)malloc(n * sizeof(unsigned));
  S = (unsigned*)malloc(n * sizeof(unsigned));

  for(int i = 1; i <= n){
    M[i - 1] = i;
    S[i - 1] = i;
  }

  std::ifstream fin("teste.txt");

  for(int i = 0; i < n; i++){
	  free(hPref[i]);
    free(sPref[i]);
  }

	free(hPref);
  free(sPref);
  free(M);
  free(S);

}