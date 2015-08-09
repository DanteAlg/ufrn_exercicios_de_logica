#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int numero;

  cout << "Digite um número inteiro: ";
  cin >> numero;
  cout << endl;

  int arr[999999];
  arr[numero] = numero + 1;
  arr[60] = 0;

  cout << "O seu sucessor é: " << arr[numero] << endl;
}
