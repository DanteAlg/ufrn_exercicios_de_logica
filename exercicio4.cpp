#include <iostream>

using namespace std;

int main() {
  float medida;

  cout << "Digite uma medida em metros: ";
  cin >> medida;
  cout << endl;

  cout << "Corresponde a " << medida*100/2.54 << " Polegadas" << endl;
  cout << "Corresponde a " << medida*100/30.48 << " Pés" << endl;
  cout << "Corresponde a " << medida/0.9 << " Jardas" << endl;
  cout << "Corresponde a " << medida/1609.44 << " Milhas" << endl;
}
