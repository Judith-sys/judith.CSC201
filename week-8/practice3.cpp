// File handling in C++
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    // ios::out  -> write mode
    // ios::in   -> read mode 
    // ios::app  -> append mode
    // ios::trunc -> erase file before writing

    fstream file("data.txt", ios::out | ios::app);  

    if (!file) {
        cout << "Error opening file.\n";
        return 0;
    }

    file << "Adding a new line.\n";
    file.close();

    cout << "DONE.\n";
    return 0;
}
