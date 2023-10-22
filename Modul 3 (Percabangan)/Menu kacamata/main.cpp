#include <iostream>
using namespace std;
int main()
{
 char menumata, menujantung;
 int biaya1, biaya2;

 cout << "==============<< MENU MENGHITUNG OPERASI >>===========" << endl;
 cout << "JENIS PENYAKIT MATA" << endl;
 cout << "1. Katarak  Rp7.500.000" << endl;
 cout << "2. Plus/Minus  Rp5.000.000" << endl;
 cout << "3. Plus/Minus  Rp4.000.000" << endl;

 cout << "JENIS PENYAKIT JANTUNG" << endl;
 cout << "1. Jantung Koroner  Rp500.000.000" << endl;
 cout << "2. Katup Jantung Rp350.000.000" << endl;
 cout << "3. Otot Jantung  R450.000.000" << endl;

 cout << "Masukkan Pilihan Anda: " << endl;
 cin >> menumata;

 switch(menumata){
        case '1':
     cout << "Biaya Operasi Katarak= " << endl;
     biaya1 = 25000;
     break;

      case '2':
     cout << "Anda memesan coto makassar " << endl;
     harga1 = 25000;
     break;

      default :
        cout << "tidak ada dimenu" << endl;
 }
 cout << "Silahkan inputkan nomor menu minuman: " << endl;
 cin >> nomenuminuman;

 switch(nomenuminuman){
        case '1':
     cout << "Anda memesan es teh " << endl;
     harga2 = 25000;
     break;

      case '2':
     cout << "Anda memesan es jeruk " << endl;
     harga2 = 25000;
     break;

      default :
        cout << "tidak ada dimenu" << endl;
 }

}
