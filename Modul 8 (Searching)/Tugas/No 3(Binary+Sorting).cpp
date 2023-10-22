#include <iostream>
using namespace std;

void selectionSort(int arr[], int length){
    int temp;
    int loc_min;

    for (int i = 0; i < length-1; i++)
    {
        loc_min = i;
        for(int j = i+1; j < length; j++){
            if(arr[j] < arr[loc_min]){
                loc_min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[loc_min];
        arr[loc_min] = temp;
    }
}
void printarray(int  arr[], int length){
for (int i=0; i < length; i++){
    cout<<arr[i]<<"  ";
    }
    //akhir dari for

    cout<<endl;
}
//akhir dari printarray


int binarysearch (int arr[], int n, int k)
{
    int kiri, kanan, tengah;
    kiri = 0;
    kanan = n;
    int posisi = -1; //Kalo gk ketemu, lgsg return ke posisi
    bool ketemu = false;

    while (kiri <=kanan)
    {
        tengah = (kanan + kiri)/2;
        if (k == arr[tengah])
        {
            posisi = tengah;
            break;
        } else if (k < arr[tengah]) {

            kanan = tengah-1;
        } else if (k > arr[tengah]){

            kiri = tengah+1;
        }
    }
    return posisi;
}


int main()
{

    cout << endl;
    cout << "=========================================================" << endl;
    cout << "                 PROGRAM PAK ANTO                        " << endl;
    cout << "=========================================================" << endl << endl;

    int acak[10] = {21, 61, 28, 72, 44, 68, 37, 52, 75, 75};

    cout<<"DATA ACAk MILIK PAK ANTO: "<<endl << endl;
    printarray(acak, 10);

    selectionSort(acak,10);

    cout << endl << endl;
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
    cout<<"                   setelah sorting                        "<<endl << endl;
    printarray(acak,10);
    cout << endl;
    cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;


    int angka[10] = {21, 61, 28, 72, 44, 68, 37, 52, 75, 75};
    int idx_ditemukan;
    int yangDicari;

    cout << "Masukan angka yang ingin di cari : ";
    cin  >> yangDicari;

     idx_ditemukan = binarysearch (angka , 10, yangDicari) ;

    if (idx_ditemukan != -1)
    {
        cout << yangDicari << " ditemukan pada indeks ke-" << idx_ditemukan << endl;
    }else {
        cout << yangDicari << " tidak ditemukan" << endl ;
    }
    return 0;


}
