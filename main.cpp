#include <iostream>
#include <fstream>
#include <queue>

int main(){
  unsigned n = 5
  unsigned **hPref;
  unsigned **sPref;

  //array de ponteiros que guarda o próximo estudante que receberá proposta de cada unmatchHospital

  unsigned *H;
  unsigned *S;

  std::ifstream fin("teste.txt");
  hPref = (unsigned**)malloc(n * sizeof(unsigned*));
  sPref = (unsigned**)malloc(n * sizeof(unsigned*));
  for(unsigned k = 0; k < n; k++){
    hPref[k] = (unsigned*)malloc(n * sizeof(unsigned));
    sPref[k] = (unsigned*)malloc(n * sizeof(unsigned));
  }
  
  //array invertido das preferências
  H = (unsigned*)malloc(n * sizeof(unsigned));
  S = (unsigned*)malloc(n * sizeof(unsigned));

  for(unsigned i = 0; i < n; i++){
    H[i] = 0;
    S[i] = 0;
  }

  std::queue<unsigned> unmatchHospital;
  for(unsigned i = 1; i <= n; i++){
    unmatchHospital.push(i);
  }

  while(!unmatchHospital.empty()){
    //casamento estavel
  }

  for(unsigned i = 0; i < n; i++){
	  free(hPref[i]);
    free(sPref[i]);
  }

	free(hPref);
  free(sPref);
  free(H);
  free(S);

  return 0;
}