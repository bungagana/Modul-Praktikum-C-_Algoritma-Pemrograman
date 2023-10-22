#include <iostream>

using namespace std;

int main()
{

 // Untuk Deklarasi Dengan Baris 5
    int bilangan[5];


  cout << "===================Baris Bilangan Ganjil==================";
  cout << endl;

// Untuk membaca Array

for (int i= 0; i<5; i++){

    cout << "Masukan bilangan " << i+1<<" : ";
    cin  >> bilangan[i];
}

// Untuk Menampilkan bilangan ganjil

    cout << "Bilangan ganjil: " << endl;
    for (int j=0; j<5; j++){
        if (bilangan[j] % 2 !=0){
            cout <<bilangan[j] << endl;
            }
    }

return 0;
}










