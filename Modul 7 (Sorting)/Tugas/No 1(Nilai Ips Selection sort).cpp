#include <iostream>
using namespace std;

void selectionSort(float arr[], int length){
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


void printarray(float arr[], int length){
for (int i=0; i < length; i++){
    cout<<arr[i]<<"  ";
    }
    //akhir dari for
    cout<<endl;
}
//akhir dari printarray

int main()
{
    float arr027[5] = {5.7, 4.3, 2.4, 1.4, 9.5 };

    cout<<"sebelum sorting: "<<endl;
    printarray(arr027, 5);

    selectionSort(arr027,5);

    cout<<"setelah sorting: "<<endl;
    printarray(arr027,5);

    return 0;
}
