#include <iostream>

using namespace std;

int main()
{
    int A[3][5] = {
        {10,20,30,40,50},
        {1,2,3,4,5},
        {11,22,33,44,55}
    };
    int B[3][5] = {
        {10,20,30,40,50},
        {1,2,3,4,5},
        {11,22,33,44,55}
    };
    int C[3][5];

    cout << "Matriks A : " << endl;
    cout << endl;

    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Matriks B : " << endl;
    cout << endl;

    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;

    }

    cout << endl;
    cout << "Matriks C ( A + B ) : " << endl;
    cout << endl;

    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
