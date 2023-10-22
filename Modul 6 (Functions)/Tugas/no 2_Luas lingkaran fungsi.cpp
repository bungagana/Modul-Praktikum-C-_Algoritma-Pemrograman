#include <iostream>

using namespace std;


//FUNGSI LUAS_KELILING PERSEGI
double luas_bungalaelatulmuna (double r){
    double luasL= r * r * 3.14;
    return luasL;
}

double keliling (double r ){
    double KelL= 3.14*2*r;
    return KelL;
}

int main()
{
    float r;

    cout << "Masukan jari jari :   "  ;
    cin  >> r;
    cout << endl;

    float luasL = luas_bungalaelatulmuna(r);

    cout << "===============Dalam CM==================";
    cout << endl;
    cout <<"Luas = " << luasL;
    cout << endl;

    float kelL = keliling (r);
    cout << "Keliling = " << kelL;
    cout << endl;
    cout << "=========================================";


    return 0;
}

