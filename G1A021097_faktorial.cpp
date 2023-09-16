#include <iostream>

using namespace std;

int cariFaktorial(int input) {
  if(input < 0) {
    cout << "Masukkan angka positif atau nol." << endl;
    return -1; // Nilai negatif menandakan kesalahan
  } else if(input > 1) {
    return input * cariFaktorial(input - 1);
  } else {
    return 1;
  }
}

int main() {
  int angka;

  cout << "Masukkan angka: ";
  cin >> angka;

  int hasil = cariFaktorial(angka);
  if (hasil != -1) {
    cout << angka << "! = " << hasil << endl;
  }

  return 0;
}
