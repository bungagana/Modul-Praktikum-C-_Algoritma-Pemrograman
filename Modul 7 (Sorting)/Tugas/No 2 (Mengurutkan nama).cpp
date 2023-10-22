#include<bits/stdc++.h> //
using namespace std;
#define MAX 10 // Mendefinisikan max itu 100


    void sortStrings(char arr[][MAX], int n)
    {
    char temp[MAX];
    for (int j=0; j<n-1; j++)
        {
        for (int i=j+1; i<n; i++)
        {
        if (strcmp(arr[j], arr[i]) > 0)
            {

    //STRCY UNTUK MENYALIN STRING
    //STRMP untuk membanidngkan apakah string satu dengn dua sama

            strcpy(temp, arr[j]);
            strcpy(arr[j], arr[i]);
            strcpy(arr[i], temp);
            }
        }
        }
    }
    void printarray(char arr[], int length){
    for (int i=0; i < length; i++){
        cout<<arr[i]<<" ";
            }  //akhir dari for
                cout<<endl;
                }//akhir dari printarray


    int main()
    {
        char arr1[][MAX] = {"Bunga","Nazwa","Hasna","Triana","Tami" };
        int a = sizeof(arr1)/sizeof(arr1[0]);




    sortStrings(arr1, a);
    cout <<"=============== DATA NAMA KELOMPOK ALPRO =================";
    cout << endl;
    cout << endl;

    cout << "=========================" << endl;
    cout << "Data Berdasar Alfabet"      << endl;
    cout << "=========================" << endl;

    for (int i=0; i<a; i++)
    printf("\n  %d  %s", i+1, arr1[i]);


    return 0;
}
