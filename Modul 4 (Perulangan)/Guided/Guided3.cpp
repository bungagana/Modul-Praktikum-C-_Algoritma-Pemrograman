#include <iostream>

using namespace std;

int main()
{
    int menu;
    do {
        cout << "Pilihan Makanan: " << endl;
        cout << "1. Ayam Goreng" << endl;
        cout << "2. Ayam Bakar" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih Makanan " << endl;
        cin >> menu;
        switch (menu){
    case 1:
        cout << "Anda memilih ayam goreng" << endl;
        break;


         case 2:
        cout << "Anda memilih ayam Bakar" << endl;
        break;

         default:
            break;
        }
      } while (menu !=2);


    return 0;
}
