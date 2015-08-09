#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float conta;

  cout << "Digite o valor da conta: ";
  cin >> conta;
  cout << endl;

  cout << "Subtotal: " << conta << endl;
  cout << "10% do serviço: " << conta/10 << endl;
  cout << "Total: " << conta + conta/10 << endl;
}
