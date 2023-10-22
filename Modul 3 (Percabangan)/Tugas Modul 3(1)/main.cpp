#include <iostream>
#include <cctype> //Header untuk kumpulan karakter

using namespace std;

int main()
{
    char vokal;
    cout << "Masukan Sebuah Huruf: ";
    cin  >> vokal;

    if (isalpha(vokal)) //pakai isalpha Karena yang mau dimasukan adalah alfabet
    {



    if (vokal == 'A' || vokal == 'a' ||
         vokal == 'I' || vokal == 'i' ||
         vokal == 'U' || vokal == 'u' ||
         vokal == 'E' || vokal == 'e' ||
         vokal == 'O' || vokal == 'o' )

        cout << vokal << " adalah salah satu huruf vokal";

        else{
            cout << vokal << " Adalah salah satu huruf konsonan";
        }

}      else {
        cout << " Karakter yang anda masukannya bukan huruf" << endl;
    }
    return 0;
    }


