#include <iostream>
using namespace std;

int main(){

    char status;
    int nilai [10] = {5,6,9,10,44,77,90,3,35,12};
    int a;
    int maks=0;

    do{

        cout<<"======================BILANGAN TERBESAR====================="<<endl;
        cout<<endl;

        cout<<"masukan bilangan : ";
        cin>>a;

        cout<<endl;

        cout<<"============================================"<<endl;
        cout<<endl;
        cout<<"============================================"<<endl;

        for (int i = 0; i < 10; i++){


            if (a == nilai[10]){
                    a=nilai[10];

                cout<<endl;
                cout<<"bilangan anda tersimpan di urutan array ke "<<i<<endl;
                cout<<endl;

                cout<<"Apakah Anda Ingin Kembali Ke Awal (Y/N) = ";
                cin>>status;
                cout<<endl;


            }

        } cout << "Nilai minimum : " <<a<<endl;


        if (a > nilai[10]){

            cout<<endl;
            cout<<"bilangan anda tidak tersimpan di urutan array"<<endl;
            cout<<endl;

            cout<<"Apakah Anda Ingin Kembali Ke Awal (Y/N) = ";
            cin>>status;
            cout<<endl;

        }


    }

    while(status == 'y'||status == 'Y');


    cout<<"Keluar"<<endl;



  return 0;

}
