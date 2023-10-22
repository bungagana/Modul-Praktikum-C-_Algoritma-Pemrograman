#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int pembilang;
    int  penyebut_010;
    float hasil;
    hasil= pembilang / penyebut_010;
    cout << "***********************PEMBAGIAN BILANGAN****************************";
    cout << endl;

    cout << "Masukkan bilangan yang akan di bagi = ";
    cin  >> pembilang;
    cout << "Masukan bilangan pembagi = ";
    cin  >> penyebut_010;

    if (pembilang !=0 && penyebut_010!=0){

        cout << setiosflags(ios::fixed);
        cout << setprecision (2) << hasil << endl; }

        else {
            cout << "Tidak Terdefinisi (syarat penyebut tidak boleh 0)";
            cout << endl;
        }

    return 0;
}
