#include <iostream>
using namespace std;

int main()
{
    int biaya1,mata,jantung;
    cout << "=================================" << endl;
    cout << "     MENGHITUNG BIAYA OPERASI    " << endl;
    cout << "=================================" << endl;
    cout << "1. Operasi Mata" << endl;
    cout << "2. Operasi Jantung" << endl;
    cout << "Masukkan Pilihan : ";
    cin >> biaya1;

    cout << endl;
    cout << endl;

    if (biaya1 == 1) {
        cout << "====JENIS PENYAKIT MATA====" << endl;
        cout << "1. Katarak" << endl;
        cout << "2. Plus / Minus" << endl;
        cout << "3. Silinder" << endl;
        cout << "Masukkan Pilihan : ";
        cin >> mata;

        switch (mata) {
        case 1:
            cout << "Biaya operasi katarak : Rp 7.500.000";
        break;
        case 2:
            cout << "Biaya operasi plus/minus : Rp 5.000.000";
        break;
        case 3:
            cout << "Biaya operasi silinder : Rp 4.000.000";
        break;
        }
        cout << endl;
        cout << endl;
        cout << "========SEMOGA LEKAS SEHAT===========";
    } else if (biaya1 == 2) {
        cout << "====JENIS OPERASI JANTUNG====";
        cout << endl;
        cout << "1. Jantung koroner" << endl;
        cout << "2. Katup Jantung" << endl;
        cout << "3. Otot jantung" << endl;
        cout << "Masukkan pilihan : ";
        cin >> jantung;

        switch (jantung){
        case 1:
            cout << "Biaya operasi Jantung Koroner : Rp 500.000.";
            break;
        case 2:
            cout << "Biaya operasi Katup Jantung : Rp 350.000.000";
            break;
        case 3:
            cout << "Biaya operasi Otot Jantung : Rp 450.000.000";


            }
    } else {
        cout << "Menu yang anda inputkan tidak tersedia";
        }

        cout << endl;
        cout << endl;
        cout << "======JANGAN LUPA MINUM OBAT========";
    return 0;
}
