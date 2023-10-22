#include <iostream>

using namespace std;
void tampilLuas (int sisi)
{
    int hasil = sisi*sisi;
    cout << "Luas = " << hasil << endl;
}
void tampilKeliling (int sisi)
{
    int hasil = 4*sisi;
    cout << "Keliling = " << hasil << endl;
}
int main()
{
    int a;
    cout << "Masukan angka : ";
    cin >> a;
    tampilLuas(a);
    tampilKeliling(a);

    return 0;
}

//Mengubah nilai di luar dirinya
