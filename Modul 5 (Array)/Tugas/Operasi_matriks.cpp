#include <iostream>

using namespace std;

int main()
{
    int A[3][3] = {
        {5,9,3},
        {6,4,7},
        {9,3,8}
    };
    int B[3][3] = {
        {2,1,2},
        {5,2,5},
        {4,0,1}
    };
    int C[3][5];

    cout << "====Matriks A===== : " << endl;

    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "====Matriks B===== : " << endl;

    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "---------------------------------------" << endl;
    cout << "          Matriks C ( A + B ) :        " << endl;
    cout << "---------------------------------------" << endl;


    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

     cout << endl;
    cout << "---------------------------------------" << endl;
    cout << "          Matriks D ( A - B ) :        " << endl;
    cout << "---------------------------------------" << endl;


    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            C[i][j] = A[i][j] - B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

     cout << endl;
    cout << "---------------------------------------" << endl;
    cout << "          Matriks Trans ( B - A ) :        " << endl;
    cout << "---------------------------------------" << endl;


    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            C[i][j] = B[i][j] - A[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
