#include <iostream>
using namespace std;
int main()
{
int bilangan_010;
int penjumlahan_bungalaelatulmuna = 0;
cout << "Masukkan bilangan yang akan dihitung : ";
cin >> bilangan_010;

cout << endl;
cout << "==============Penjumlahan Menurun==============";
cout << endl;
cout << endl;
cout << bilangan_010 << " = ";
for (int i = bilangan_010 ; i > 0 ; i--) {
penjumlahan_bungalaelatulmuna += i;
if ( i != 1 ) {
cout << i << " + ";
} else {
cout << i << " = ";
}
}
cout <<5 penjumlahan_bungalaelatulmuna << endl;
cout << endl;
cout << "===============================================";
return 0;

}
