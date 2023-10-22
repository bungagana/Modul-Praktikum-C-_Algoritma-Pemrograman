#include <iostream>

using namespace std;


//PROSEDUR Bilangan Ganjil Genap

void bilangan_010 (int a)
{
    if (a%2==0){
        cout << "Bilangan  genap " ;
    } else {
        cout << "Bilangan Ganjil ";
    }

}

int main()
{
   int x;
   cout << "Masukan bilangan: ";
   cin  >> x;
   cout << endl;

   cout << "==========================================" << endl;
   cout << "Diatas merupakan ";
   bilangan_010(x);

    cout << endl;
    cout << "=========================================="  ;


    return 0;
}
