#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int C;
    int n; //bilangan/
    int m ;//Pangkat/
    int hasil = 1;

    cout << "======================PEMANGKATAN==================";
    cout << endl;

    cout << "Masukan Bilangan  = ";
    cin  >> m;
    cout << "Masukan Pangkat   = ";
    cin >> n;

    for (C = 1; C <= m; C++){
         hasil = hasil * m;
    }
    cout << "Hasil Pangkat     = " << hasil;
    cout << endl;
    cout << "==================================================";
    return 0;
}
