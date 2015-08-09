#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float largura, comprimento, piso_larg=0.03, piso_compr=0.03;
  int qtd_comprimento, qtd_largura, total;

  cout << "Digite a largura do cômodo: ";
  cin >> largura;
  cout << endl;

  cout << "Digite a comprimento do cômodo: ";
  cin >> comprimento;
  cout << endl;

  qtd_comprimento = comprimento/piso_compr;
  comprimento = comprimento - piso_compr*qtd_comprimento;

  qtd_largura = largura/piso_larg;
  largura = largura - piso_larg*qtd_largura;

  total = qtd_largura*qtd_comprimento;

  if(comprimento != 0) {
    total = total + qtd_largura;
  }

  if(largura != 0) {
    total = total + qtd_comprimento - 1;
  }

  cout << "Você vai precisar de ao menos " << total << " pisos" << endl;
}
