// File handling in C++
#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // ofstream  → write to a file (output)
    // ifstream  → read from a file (input)
    // fstream   → read and write

    ofstream outfile("data.txt");   

    if (!outfile) {
        cout << "Error opening file!" << endl;
        return 0;
    }

    outfile << "Welcome to C++\n";
    outfile << "This is file handling class\n";

    outfile.close();

    cout << "Data written to file\n";
    return 0;
}
