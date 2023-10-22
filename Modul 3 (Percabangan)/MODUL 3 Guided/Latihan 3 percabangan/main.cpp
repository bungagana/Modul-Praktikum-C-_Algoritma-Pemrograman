#include <iostream>

using namespace std;

int main()
{
  int suhu;

  cout << "Masukkan angka suhu: ";
  cin  >> suhu;

  if (suhu<= 0){
    cout << "Ketika suhu berada di " << suhu << "celcius, maka berwujud es" <<endl;
  } else if (suhu > 0 && suhu < 100){
    cout << "Ketika suhu berada di " << "celcius, maka berwujud  cair"  << endl;
  } else{
    cout << "Ketika suhu berada di " << "celcius, maka berwujud gas" << endl;
  }


    return 0;
}
