#include <iostream>

using namespace std;

int main()
{
    int jumlahData = 5; /*deklarasi dan initializing jumlah data */
    int nilai[jumlahData]; /*deklarasi array sesuai jumlah data */
    /* input data */
    cout << "Masukkan data : " << endl;
    for(int x = 0 ; x < jumlahData ; x++) {
        cout << "Nilai[" << x << "] : ";
        cin >> nilai[x];
    }


         /*Output*/
    cout << "Data yang dimasukkan adalah : " << endl;
    for(int x = 0 ; x < jumlahData ; x++) {
        cout << "Nilai[" << x << "] = " << nilai[x] << endl;
    }
    return 0;
}
