#include <iostream>
using namespace std;

void readArray(int list[], int size){
    for(int i = 0; i <= size - 1; i++){
        cout << "Enter the number at index " << i << " ===> ";
        cin >> list[i];
    }
}

void nPrintArray(int list[], int size){
    for(int i = 0; i <= size - 1; i++){
        cout << "The element at index " << i << " is " << list[i] << endl;
    }
}

int main(){
    int size;
    int arr[50];

    cout << "Please enter the size of the array ===> ";
    cin >> size;

    readArray(arr, size);
    nPrintArray(arr, size);

    return 0;
}
