#include <iostream>

using namespace std;

int binarysearch (char arr[], int n, int k)
{
    int kiri, kanan, tengah;
    kiri = 0;
    kanan = n-1;
    int posisi = -1; //Kalo gk ketemu, lgsg return ke posisi
    bool ketemu = false;

    while (! ketemu && kiri <=kanan)
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
    char huruf[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int idx_ditemukan;
    char yangDicari;

    cout << "Masukan angka yang ingin di cari : ";
    cin  >> yangDicari;

     idx_ditemukan = binarysearch (huruf , 6 , yangDicari) ;

    if (idx_ditemukan != -1)
    {
        cout << yangDicari << " ditemukan pada indeks ke-" << idx_ditemukan << endl;
    }else {
        cout << yangDicari << " tidak ditemukan" << endl ;
    }
    return 0;
}
