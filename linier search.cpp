#include <iostream>

using namespace std;

int main(){
  int data[100], cari, i, n;

  cout << "Masukkan banyaknya jumlah data : ";
  cin >> n;

  cout << "Input setiap data integer sebanyak " << n << " :" << endl;
  for (i = 0; i < n; i++){
    cin >> data[i];
  }

  cout << "Input data yang ingin dicari: ";
  cin >> cari;

  for (i = 0; i < n; i++){
    if (data[i] == cari){
      cout << cari << " berada di indeks ke " << i + 1 << ".\n";
      break;
    }
  }

  if (i == n){
    cout << cari << " tidak ada.\n";
  }

  return 0;
}
