#include <iostream>

using namespace std;


//guide 1-fungsi kuadrat
int fungsikuadrat (int x, int y){

    int hasil= (x*x) + (y*y);
    return hasil;
}

int main()
{
    int a, b;

    cout << "Masukan bilangan pertama: ";
    cin  >> a;

    cout << "Masukan bilangan kedua: ";
    cin  >> b;

    int hasil = fungsikuadrat(a,b);
    cout <<"hasil = " << hasil;



    return 0;
}

//FUngsi memakai return value
