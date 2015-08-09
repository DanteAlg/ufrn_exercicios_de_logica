#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float peso, altura, imc;

  cout << "Digite seu peso: ";
  cin >> peso;
  cout << endl;

  cout << "Digite sua altura: ";
  cin >> altura;
  cout << endl;

  imc = peso/pow(altura, 2);
  cout << "Seu IMC é " << imc << endl;
}
