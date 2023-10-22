#include <iostream>

using namespace std;

int Sequensearch (double arr[], int n, double kuncipencarian )
{
    for (int i=0; i<n; i++)
    {
       if (arr[i] == kuncipencarian)
       {
           return i;
       }
    } return -1;
}


int main()
{
    double angka[6] = {1.43, 5.32, 7.6, 2.1, 3.6, 9.33};
    int idx_ditemukan;
    double yangDicari;

    cout << "Masukan angka yang ingin di cari : ";
    cin  >> yangDicari;

     idx_ditemukan = Sequensearch (angka , 6 , yangDicari) ;

    if (idx_ditemukan != -1)
    {
        cout << yangDicari << " ditemukan pada indeks ke-" << idx_ditemukan << endl;
    }else {
        cout << yangDicari << " tidak ditemukan" << endl ;
    }
    return 0;
}
