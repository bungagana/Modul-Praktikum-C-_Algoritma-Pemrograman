#include <iostream>
// deklarasi dan menampilkan prosedur
using namespace std;

// prodesur dengan parameter
void tampilNama (string a)
{
    cout << "Nama saya adalah : " << a << endl;
}
void tampilAlamat ()
{
    cout << "Alamat saya di Purwokerto" << endl;
}
int main()
{
    tampilNama("Bunga Laelatul Muna");
    tampilAlamat();
    return 0;
}
