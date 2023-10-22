#include<iostream>
using namespace std;

int main(){

    int nilai;
    long faktorial = 1;

    cout<<"Masukan Nilai Bilangan = ";
    cin>>nilai;
    int C = nilai;

    cout<<"Total Nilai = ";
    while (C >= 1){
        faktorial *= C;

        /* Pemanis kecuali (c--) */
        if(C !=1){
            cout<<C<<" x ";
        }else{
            cout<<C<<" = ";
        }
         C--;
    }
    cout<<faktorial;
    return 0;
}
