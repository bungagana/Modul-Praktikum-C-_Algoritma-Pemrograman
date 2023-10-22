#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Masukkan banyaknya data : ";
    cin >> n;

    string nama[n];
    string nim[n];

    for (int i = 0 ; i < n ; i++) {
        cout << "Masukkan Nama Mahasiswa-" << i+1 << ": ";
        cin >> nama[i];
    }

    cout << endl << endl;

    for (int i = 0 ; i < n ; i++) {
        cout << "Nama : " << nama[i] << endl;
    }
    return 0;
}
