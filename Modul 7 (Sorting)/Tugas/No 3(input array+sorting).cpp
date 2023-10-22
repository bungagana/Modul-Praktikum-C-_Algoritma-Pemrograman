#include <iostream>
using namespace std;



void insertion_Sort_ASC(char arr[], int length){
    int i,j,temp;

    for(i=1; i < length; i++){
        j=i;

        while(j > 0 && arr[j-1] > arr[j]){ // ascending
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }//end of while loop
    }//end of for loop
}

void insertionSort_DSC(char arr[], int length){
    int i,j,temp;
    for(i=1; i < length; i++){
        j=i;
        while(j>0 && arr[j] > arr[j-1]){ // descending
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
}

void printArray(char a[], int length) {
    for (int i = 0; i < length; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

}

int main()
{
    int n_bungaLaelatulMuna;
    cout << endl;
    cout << "Masukkan banyaknya data : ";
    cin >> n_bungaLaelatulMuna;
    char nama[n_bungaLaelatulMuna];
    cout << endl;

    for (int i = 0 ; i < n_bungaLaelatulMuna ; i++){
        cout << "Masukkan Alfabet " << i+1 << ": ";
        cin >> nama[i];
    }

    cout << endl << endl;
    for (int i = 0 ; i < n_bungaLaelatulMuna ; i++){
        cout << "Alfabet : " << nama[i] << endl;
    }
    cout << endl;
    cout << "=====================================" << endl;
    cout << endl;
    cout << "=====================================" << endl;

    cout << "Sorting Descanding : " << endl;
    insertionSort_DSC(nama,n_bungaLaelatulMuna);
    printArray(nama,n_bungaLaelatulMuna);



    cout << "Sorting Ascending : " << endl;
    insertion_Sort_ASC (nama,n_bungaLaelatulMuna);
    printArray(nama,n_bungaLaelatulMuna);



    return 0;
}
