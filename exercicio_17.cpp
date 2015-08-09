#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float dinheiro;
  float valores[12] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.5, 0.25, 0.10, 0.05, 0.01};
  /* OBS: C++ é menino criança, não sabe comparar int com float */
  int qtd;

  string texto;

  cout << "Digite o valor de troco: ";
  cin >> dinheiro;
  cout << endl;

  for(int cont=0; ((cont < 13) || (dinheiro != 0)); cont++) {
    if(dinheiro >= valores[cont]) {
      qtd = dinheiro/valores[cont];

      if (valores[cont] < 1) {
        texto = " moeda(s) de R$";
      }
      else {
        texto = " cédula(s) de R$";
      }

      cout << qtd << texto << valores[cont] << endl;
      dinheiro = dinheiro - valores[cont]*qtd;
    }
  }
}
