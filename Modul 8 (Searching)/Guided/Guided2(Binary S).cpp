#include <iostream>

using namespace std;

int binarysearch (int arr[], int n, int k)
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
    int angka[6] = {1,5,7,8,11,15};
    int idx_ditemukan;
    int yangDicari;

    cout << "Masukan angka yang ingin di cari : ";
    cin  >> yangDicari;

     idx_ditemukan = binarysearch (angka , 6 , yangDicari) ;

    if (idx_ditemukan != -1)
    {
        cout << yangDicari << " ditemukan pada indeks ke-" << idx_ditemukan << endl;
    }else {
        cout << yangDicari << " tidak ditemukan" << endl ;
    }
    return 0;
}

