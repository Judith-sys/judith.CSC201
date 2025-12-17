#include <iostream>
using namespace std;

int main(){
    double Fahrenheit;
    double Celsius;
    cout << "Enter Temperature in Fahrenheit:";
    cin >> Fahrenheit;
    Celsius = 5.0/9.0 *(Fahrenheit - 32);
    cout << "The temperature in Celsius is:" <<Celsius;

    return 0;
}