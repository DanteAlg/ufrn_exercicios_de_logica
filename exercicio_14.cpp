#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int D0, M0, A0, D1, M1, A1, diferenca;

  cout << "Primeira data - Dia: ";
  cin >> D0;
  cout << endl;

  cout << "Primeira data - Mes: ";
  cin >> M0;
  cout << endl;

  cout << "Primeira data - Ano: ";
  cin >> A0;
  cout << endl;

  cout << "Segunda data - Dia: ";
  cin >> D1;
  cout << endl;

  cout << "Segunda data - Mes: ";
  cin >> M1;
  cout << endl;

  cout << "Segunda data - Ano: ";
  cin >> A1;
  cout << endl;

  diferenca = (D1 - D0) + (M1 - M0)*30 + (A1 - A0)*360;

  if(diferenca < 0) { diferenca = -diferenca; }

  cout << "A diferença entre as datas é de " << diferenca << " dias" << endl;
}
