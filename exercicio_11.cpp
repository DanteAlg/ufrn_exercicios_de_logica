#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int horas, dias, resto;

  cout << "Digite o número de horas: ";
  cin >> horas;
  cout << endl;

  dias = horas/24;
  resto = horas % 24;

  cout << dias << " Dias e " << resto << " horas" << endl;
}
