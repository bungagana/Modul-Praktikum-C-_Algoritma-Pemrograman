#include <iostream>

using namespace std;

int main()
{
    int kelipatan;
    int angka;

    cout << " Masukan kelipatan : ";
    cin  >> kelipatan;
    angka = kelipatan;

    while (angka<= 15){
        cout << angka << endl;
        angka = angka+kelipatan; //angka = angka + Kelipatan
    }
    return 0;
}
