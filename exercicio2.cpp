#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float a = 1.5, b = 4, c = 2, d = 3, e = 1.2, f = 4.3;
  float exec_a, exec_b, exec_c, exec_d;

  /* A) */
  exec_a = a*(c + d)/b*(e + f);

  /* B) */
  exec_b = pow(a, b + c)/(e + f) + d;

  /* C) */
  exec_c = (a + pow(c + d, 2)*d/pow(b, 2))/c;

  /* D) */
  exec_d = (-b + sqrt(pow(b, 2) - 4*a*c))/2;

  cout << "Resposta A = " << exec_a << endl;
  cout << "Resposta B = " << exec_b << endl;
  cout << "Resposta C = " << exec_c << endl;
  cout << "Resposta D = " << exec_d << endl;
}
