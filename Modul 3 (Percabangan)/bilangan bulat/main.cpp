#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float penyebut;
    float pembilang_bungalaelatulmuna;
    float hasil_010;

    cout << "***********************PEMBAGIAN DAN PEMBULATAN******************************************";
    cout << endl;
    cout << endl;
    cout << "Masukkan bilangan yang akan dibagi : ";
    cin  >> pembilang_bungalaelatulmuna;

    cout << "Masukkan bilangan pembagi : ";
    cin  >> penyebut;

    hasil_010 = pembilang_bungalaelatulmuna / penyebut;
    if (pembilang_bungalaelatulmuna != 0 && penyebut != 0
        ){
        cout << setiosflags(ios::fixed) << endl;
        cout << "Hasil bagi : " << setprecision(2) << hasil_010 << endl;

    } else {
        cout << "tidak boleh dibagi 0" << endl;
    }

    return 0;
}


