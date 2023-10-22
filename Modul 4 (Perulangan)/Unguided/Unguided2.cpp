#include <iostream>
using namespace std;
int main()
{
int bilangan;
int faktorial = 1;
cout << "Masukkan bilangan yang akan dihitung : ";
cin >> bilangan;
cout << bilangan << "! = ";
for (int i = bilangan ; i > 0 ; i--) {
faktorial *= i;
if ( i != 1 ) {

cout << i << " x ";
} else {
cout << i << " = ";
}
}
cout << faktorial << endl;
return 0;
}
