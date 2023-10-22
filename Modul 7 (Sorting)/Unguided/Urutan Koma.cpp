
#include <iostream>

using namespace std;

void insertionSort_ASC(char arr[], int length){
    int i,j,temp;
    for(i=1; i < length; i++){
        j=i;
        while(j>0 && arr[j] < arr[j-1]){ // ascending
            temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
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

void printArray(char arr[], int length) {
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main() {
    char arr[6] = {'c', 'f', 'a', 'z', 'd', 'p'};

    cout << "Sebelum sort : " << endl;
    printArray(arr,6);

    insertionSort_DSC(arr,6);

    cout << "Sesudah sort : " << endl;
    printArray(arr,6);
    return 0;
}
