#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float pi = 3.14159265, raio;

  cout << "Digite um raio qualquer: ";
  cin >> raio;
  cout << endl;

  cout << "Perímetro: " << 2*pi*raio << endl;
  cout << "Área: " << pi*pow(raio, 2) << endl;
  cout << "Volume: " << 4*pi*pow(raio, 3)/3 << endl;
}
