#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 3, 4, 5, 6};

    // calculate size properly
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << size << endl;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\n";
    }

    return 0;
}
