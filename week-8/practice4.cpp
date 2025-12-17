// File handling in C++
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream infile("data.txt"); 
    if (!infile) {
        cout << "File cannot be opened." << endl;
        return 0;
    }

    int number;
    int sum = 0;

    while (infile >> number) {
        cout << number << endl;
        sum += number;
    }

    cout << "The sum is: " << sum << endl;

    infile.close();
    return 0;
}
