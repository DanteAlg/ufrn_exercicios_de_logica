#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float pi=3.14159265, altura, raio_maior, raio_menor;

  cout << "Digite a altura: ";
  cin >> altura;
  cout << endl;

  cout << "Digite o raio maior: ";
  cin >> raio_maior;
  cout << endl;

  cout << "Digite o raio menor: ";
  cin >> raio_menor;
  cout << endl;

  if (raio_maior > raio_menor) {
    float lateral = sqrt(pow(raio_maior - raio_menor, 2) + pow(altura, 2));

    cout << "O volume do tronco de cone é: " << pi*altura*(pow(raio_menor, 2) + raio_menor*raio_maior + pow(raio_maior, 2))/3 << endl;
    cout << "A area da superfície do tronco de cone é: " << pi*lateral*(raio_maior + raio_menor) << endl;
  }
  else {
    cout << "Ai vc me complica cara... Raio maior tem que ser maior né? ;)" << endl;
  }
}
