#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  int horas;

  cout << "Digite o número de horas: ";
  cin >> horas;
  cout << endl;

  printf("São %.2f dias", horas/24.0);
  cout << endl;
}
