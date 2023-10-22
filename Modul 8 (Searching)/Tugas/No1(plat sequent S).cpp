#include <iostream>
#include <string>

using namespace std;

int Sequensearch (string arr[], int n, string kuncipencarian )
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
    string plat_010 [10] = {"R 300 SR" , "R 1234 DJ", "R 3218 RR", "R 701 LP",
                            "R 007 TU", "R 3 ST", "R 999 RT", "R 210 RO", "R 1111 II", "R 4987 LH" };
    int idx_ditemukan;
    string yangDicari;

    cout << endl;
    cout << "=========================================================" << endl;
    cout << "                    DATA BASE PARKIR                     " << endl;
    cout << "=========================================================" << endl << endl;
    cout << "Masukan Nomor PLAT yang ingin di cari : ";
    getline(cin, yangDicari);

     idx_ditemukan = Sequensearch (plat_010 , 10 , yangDicari) ;


     cout << endl;
     cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
    if (idx_ditemukan != -1)


    {
        cout << yangDicari << " Terdaftar di Data base dan ada pada indeks ke-" << idx_ditemukan << endl;
    }else {
        cout << "Plat Dengan Nomor " << yangDicari << " tidak ada pada Database" << endl ;
    }
    return 0;
}
