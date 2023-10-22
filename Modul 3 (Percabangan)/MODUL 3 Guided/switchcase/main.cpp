#include <iostream>

using namespace std;

int main()
{
 int hari;
 cout << "Masukan nomor hari (1....7) : ";
 cin >> hari;

 switch (hari){
 case 1:
      cout << "Hari ke -" << hari <<" : adalah minggu";
      break;
      case 2:
      cout << "Hari ke -" << hari <<" : adalah Senin";
      break;
      case 3:
      cout << "Hari ke -" << hari <<" : adalah Selas";
      break;
      case 4:
      cout << "Hari ke -" << hari <<" : adalah Rabu";
      break;
      case 5:
      cout << "Hari ke -" << hari <<" : adalah Kamis";
      break;
      case 6:
      cout << "Hari ke -" << hari <<" : adalah Jumat";
      break;
      case 7:
      cout << "Hari ke -" << hari <<" : adalah Sabtu";
      break;

      default:
        cout << "Tidak terdapat nama hari ke- " << hari;
 }
    return 0;
}
