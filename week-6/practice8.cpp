#include <iostream>

using namespace std;
void nprint(char ch,int n)
{
    for (int i = 0; i < n; i++)
    cout << ch;
}

int main(){
    string name = "Judith";
    nprint(name);
}