#include <iostream>

using namespace std;

int binarysearch (long arr[], int n, long k)
{
    int kiri, kanan, tengah;
    kiri = 0;
    kanan = n;
    int posisi = -1; //Kalo gk ketemu, lgsg return ke posisi
    bool ketemu = false;

    while (kiri <=kanan)
    {
        tengah = (kanan + kiri)/2;
        if (k == arr[tengah])
        {
            posisi = tengah;
            break;
        } else if (k < arr[tengah]) {

            kanan = tengah-1;
        } else if (k > arr[tengah]){

            kiri = tengah+1;
        }
    }
    return posisi;
}

int main()
{
    long NIM_bungalaelatulmuna [13] = {12102001, 12102002, 12102003, 12102004, 12102005, 12102006,
                      12102007, 12102008, 12102009, 12102010, 12102011, 12102012, 12102013};
    int idx_ditemukan;
    long yangDicari;

    cout << endl;
    cout << "=========================================================" << endl;
    cout << "                     DAFTAR NIM MAHASISWA                " << endl;
    cout << "=========================================================" << endl << endl;

    cout << "Masukan angka yang ingin di cari : ";
    cin  >> yangDicari;

     idx_ditemukan = binarysearch (NIM_bungalaelatulmuna , 13 , yangDicari) ;

     cout << endl;
     cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
    if (idx_ditemukan != -1)
    {
        cout << "NIM " <<  yangDicari << " Terdaftar di kelas dan ada pada indeks ke- " << idx_ditemukan << endl;
    }else {
        cout << "NIM " <<  yangDicari << " Tidak Terdaftar Di Kelas " << endl ;
    }
    return 0;
}
