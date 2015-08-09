#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int hora_min=60, dia_min=hora_min*24, horas, minutos, dias;

  cout << "Digite os minutos: ";
  cin >> minutos;
  cout << endl;

  if (minutos > dia_min) {
    dias = minutos/dia_min;
    minutos = minutos - dia_min*dias;
    cout << dias << " Dias ";
  }

  if (minutos > hora_min) {
    horas = minutos/hora_min;
    minutos = minutos - hora_min*horas;
    cout << horas << " Horas ";
  }

  cout << minutos << " Minutos " << endl;
}
