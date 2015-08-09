#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int numero=0, c, d, u;

  while((numero < 100) && (numero < 1000)) {
    cout << "Digite um número com 3 casas decimais: ";
    cin >> numero;
    cout << endl;
  }

  c = numero/100;
  d = (numero - c*100)/10;
  u = numero - (c*100 + d*10);

  cout << "Retorno UCD: " << u << c << d << endl;
}

/* 123 para pegar o c podemos apenas 123/100 se inteiro teremos 1 */
/* 123 para pegar o d podemos apenas c (que é 1) e multiplicar por 100
 subtraindo do número inicial 123 - 100 = 23 onde 23/10 = 2 */
