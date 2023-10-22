#include <iostream>
using namespace std;
int main() {
 int pilihan;
 int max;
 int min_010;
 int sum_bungalaelatulmuna;
 float rata_rata;
 int nilai[10];
 do {
 cout << "\n\t" << "MENU" << endl;
 cout << endl;
 cout << "1. Input Array" << endl;
 cout << "2. Tampil Array" << endl;
 cout << "3. Cari Nilai Minimum " << endl;
 cout << "4. Cari Nilai Maximum " << endl;
 cout << "5. Hitung Rata - Rata " << endl;
 cout << endl;
 cout << "masukkan pilihan : ";
 cin >> pilihan;
 switch (pilihan) {
 case 1 :
 for (int i = 0; i < 10; i++) {
 cout << "masukkan bilangan ke- " << i + 1 <<
" : ";
 cin >> nilai [i];
 }
 break;
 case 2 :
 for (int j = 0; j < 10 ; j++) {
 cout << "nilai array ke- " << j << " : " <<
nilai[j] << endl;
 }
 break;
 case 3 :
 int k;
 k = 0;
min_010 = nilai[0];
 // Melakukan perbandingan nilai min dengan nilai array nilai[k]
 while (k < 10) {
 if (min_010 > nilai[k]) {
 min_010 = nilai [k];
 }
 k++;
 }
 cout << "=============================" << endl;
cout << "Nilai Minimum Array : " << min_010 <<
endl;
 cout << "=============================" << endl;
 break;
 case 4 :
 int l;
 l = 0;
max = nilai[0 ];
 // lakukan perbandingan nilai max dengan nilai
array nilai[l]
 while (l < 10) {
 if (max < nilai[l]) {
 max = nilai[l];
 }
l++;
 }
cout << "=============================" << endl;
cout << "Nilai Maximum Array : " << max << endl;
cout << "=============================" << endl;
 break;
 case 5 :
 sum_bungalaelatulmuna = 0;
for (int m = 0; m < 10; ++m) {
 sum_bungalaelatulmuna += nilai[m];
 }
 // cast nilai average agar mendapatkan nilai
pecahan atau angka di belakang koma
 rata_rata = (float) sum_bungalaelatulmuna / 10;
 cout << "=============================" << endl;
cout << "nilai rata - rata : " << rata_rata
<<endl;
 cout << "=============================" << endl;
 break;
 }
 // lakukan perulangan selama pil != 0; angka 0 sebagai nilai
untuk mengakhiri program
 } while (pilihan != 0);
 return 0;
}
