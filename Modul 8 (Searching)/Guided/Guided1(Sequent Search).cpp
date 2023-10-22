#include <iostream>

using namespace std;

int sequentialsearch (int arr [], int n , int kunciPencarian) //Namanya parameter
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == kunciPencarian) //ketika bilangan yang cari ada ada array maka selesai
        {
                return i;
        }
    }
    return -1; //Ketika bilangan yg dicari tidak ada pada array.
                // -1 artinya tidak ditemukan
}

int main () {
    int angka [6] = {1,5,7,2,3,9};
    int idx_ditemukan; //Menyimpan nilai yang ditemukan
    int yangDicari;

    cout << "masukkan angka yang dicari : " ;
    cin >> yangDicari ;

    idx_ditemukan = sequentialsearch (angka , 6 , yangDicari) ;

    if (idx_ditemukan != -1)
    {
        cout << yangDicari << " ditemukan pada indeks ke-" << idx_ditemukan << endl;
    }else {
        cout << yangDicari << " tidak ditemukan" << endl ;
    }
    return 0;
}
