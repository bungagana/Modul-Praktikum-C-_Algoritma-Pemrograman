#include <iostream>

using namespace std;


//PROSEDUR Perbandingan

void pembanding (int a, int b)
{
    if (a>b){
        cout << "Bilangan Terbesar: " << a ;
    } else if (a< b){
        cout << "Bilangan terbesar: " << b;

    } else {
        cout << "Bilangan sama besar";
    }

}

int main()
{
   int x, y;
   cout << "Masukan bilangan pertama: ";
   cin  >> x;
   cout << "Masukan bilangn kedua: " ;
   cin  >> y;

   pembanding(x,y);

    return 0;
}
