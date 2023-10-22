#include <iostream>
using namespace std;
int main()
{
int bilangan1, bilangan2;
int sisa;
cout << "Masukkan bilangan 1 : "; cin >> bilangan1;
cout << "Masukkan bilangan 2 : "; cin >> bilangan2;
//dalam algoritma ini, bilangan 1 harus > bilangan 2
//jika tidak, maka kita tukar dengan algoritma dibawah ini
if (bilangan1 < bilangan2) {
int temp = bilangan1;
bilangan1 = bilangan2;
bilangan2 = temp;
}
//algoritma euclidean
do {
sisa = bilangan1 % bilangan2;
bilangan1 = bilangan2;
bilangan2 = sisa;
} while(sisa != 0);
cout << "Faktor Persekutuan Terbesar : " << bilangan1;
return 0;
}
