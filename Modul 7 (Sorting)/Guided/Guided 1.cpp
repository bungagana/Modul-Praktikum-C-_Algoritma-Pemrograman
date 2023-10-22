#include <iostream>
using namespace std;


//MENGURUTKAN BILANGAN

void insertionSort(int arr[], int length){
    int i,j,temp;

    for(int i = 1; i < length; i++)
    {
        j = i;

        while (j>0 && arr[j] < arr[j-1])
        {
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;

            j--;
        }
    }
}

void bubbleSort(int arr[], int length) {
    int temp;
    int j = length;

    while (j >= 2)
    {
        for (int i = 0; i < j; i++)
        {
            if (arr[i] > arr[i+1]) {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }

        j--;
    }
}

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

void printArray(int arr[], int length){
    for (int i = 0; i<length;i++)
    {
       cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int angka[6] = {4,7,1,2,9,5};

    cout << "Sebelum sort : ";
    printArray(angka, 6);

    selectionSort(angka, 6);

    // Disini dilakukan sorting

    cout << "Setelah sort : ";
    printArray(angka, 6);

    return 0;
}
