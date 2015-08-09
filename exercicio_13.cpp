#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int perc_lucro, perc_imposto;
  float valor, lucro, impostos;

  cout << "Valor do carro: ";
  cin >> valor;
  cout << endl;

  cout << "Percentual de lucros: ";
  cin >> perc_lucro;
  cout << endl;

  cout << "Percentual de impostos: ";
  cin >> perc_imposto;
  cout << endl;

  lucro = valor*perc_lucro/100;
  impostos = valor*perc_imposto/100;

  cout << "O lucro do distrubuidor será: " << lucro << endl;
  cout << "O imposto sobre o veículo será: " << impostos << endl;
  cout << "O valor final do veículo será: " << valor + lucro + impostos << endl;
}
