#include <iostream>


    using namespace std;

int main()
{
    /*deklarasi dan mengisi array*/
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};


    /*menampilkan beberapa data */
    cout << "Data indeks ke-1 : " << balance[1] << endl;
    cout << "Data indeks ke-0 : " << balance[0] << endl;
     cout << "Data indeks ke-4 : " << balance[4] << endl;

    cout << endl;
    /* kita bisa mengisi atau merubah isi dari array */
    balance[4] = 18.5;
    cout << "Data indeks ke-4 : " << balance[4] << endl;


    cout << endl;
    /* menampilkan seluruh data dengan for*/



    return 0;
}
