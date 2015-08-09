#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int a, b, c;

  cout << "Digite A: ";
  cin >> a;
  cout << endl;

  cout << "Digite B: ";
  cin >> b;
  cout << endl;

  c = a; /* C vai armazenar A */
  a = b; /* A vai armazenar B */
  b = c; /* B vai armazenar C, antigo valor de A */

  cout << "Valor de A inicial é " << c << " e agora é: " << a << endl;
  cout << "Valor de B inicial é " << a << " e agora é: " << b << endl;
}
