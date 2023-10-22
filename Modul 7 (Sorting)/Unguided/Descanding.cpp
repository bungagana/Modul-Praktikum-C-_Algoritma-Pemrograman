# include <iostream>

using namespace std;

///Ungided 1

void BubbleSort (float arr[], int n)
{
    int i, j;
    for (i = 0; i < n; ++i){
        for (j = 0; j < n-i-1; ++j){
            if (arr[j] > arr[j+1]){
				arr[j] = arr[j]+arr[j+1];
				arr[j+1] = arr[j]-arr[j + 1];
				arr[j] = arr[j]-arr[j + 1];
            }
        }
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

    BubbleSort(arr027,5);

    cout<<"setelah sorting: "<<endl;
    printarray(arr027,5);

    return 0;
}
