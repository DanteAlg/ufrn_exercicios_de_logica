#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float conta, comissao;

  cout << "Digite o valor da conta: ";
  cin >> conta;
  cout << endl;

  cout << "Digite o valor da nossa caixinha de natal [Seja legal ;)]: ";
  cin >> comissao;
  cout << endl;

  cout << "Subtotal: " << conta << endl;
  cout << "Comissão: " << comissao << endl;
  cout << "Total: " << conta + comissao << endl;
}
