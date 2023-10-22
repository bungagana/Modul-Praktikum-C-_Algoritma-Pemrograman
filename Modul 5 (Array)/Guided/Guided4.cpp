#include <iostream>

using namespace std;

int main()
{
    int matriksA [2][4] = {{4,2,5,8}, {3,7,1,9}};

    cout << "Matriks A : " << endl;
    for (int baris=0;baris < 2; baris++){
        for (int kolom = 0; kolom < 4; kolom++){
            cout <<matriksA[baris][kolom] << " ";
        }
        cout << endl;
    }

    return 0;
}
