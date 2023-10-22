#include <iostream>

using namespace std;


//FUNGSI LUAS_KELILING PERSEGI
int luas (int x){
    int luasP= (x) * (x);
    return luasP;
}

int keliling (int z){
    int KelP= (4) * (z);
    return KelP;
}

int main()
{
    int a;
    cout << "Masukan bilangan pertama: ";
    cin  >> a;

    int luasP = luas(a);
    cout <<"Luas = " << luasP;
    cout << endl;

    int kelP = keliling (a);
    cout << "Keliling = " << kelP;

    return 0;
}
