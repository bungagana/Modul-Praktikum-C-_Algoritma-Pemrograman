
#include <iostream>
using namespace std;
int main()
{
int pilih;
float sisi, jari2, tinggi;
float isi_sisi, luas_lingkaran, isi_silinder;
cout<<" <<< M E N U <<<\n";
cout<<"\n";
cout<<"1. Menghitung Isi Kubus\n";
cout<<"2. Menghitung Luas Lingkaran\n";
cout<<"3. Menghitung Isi Silinder\n";
cout<<"\n";
cout<<"Pilih Nomor (1-3) = ";
cin>>pilih;
cout<<"\n";
switch(pilih){
case 1:
cout<<"Panjang Sisi Kubus = ";
cin>>sisi;
isi_sisi= sisi * sisi * sisi;
cout<<"Isi Kubus = "<< isi_sisi;
break;
case 2:
cout<<"Jari-Jari Lingkaran = ";
cin>>jari2;
luas_lingkaran = 3.14 * jari2 * jari2;
cout<<"Luas Lingkaran = "<< luas_lingkaran;
break;
case 3:
cout<<"Jari-Jari Lingkaran = ";
cin>>jari2;
cout<<"Tinggi Silinder = ";
cin>>tinggi;
isi_silinder=3.14 * jari2 * jari2 * tinggi;
cout<<"Isi Silinder = "<< isi_silinder;
break;
}
return 0;
}
