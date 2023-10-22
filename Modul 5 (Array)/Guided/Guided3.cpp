#include <iostream>

using namespace std;

int main()
{
    int bilangan[5]= {0,-1,-3,-8,5};
    int maksmimal = bilangan[0];
        for (int i=0; i < 5; i++){
            if (bilangan [i] > maksmimal){
                maksmimal=bilangan [i];
            }
        }
        cout << "Nilai Maksimum : " << maksmimal << endl;


    return 0;
}
