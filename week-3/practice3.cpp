#include<iostream>
#include<cstdlib>
#include <ctime>

using namespace std;
int main(){
   srand(time(0));
   int n1 = rand() %10, n2= rand() %10;
   if (n1 < n2) swap (n1,n2);
    int answer;
    cout<< "What is"<< n1 << "-"<< n2<<"?";
    cin>> answer;
    

    if (answer== n1-n2)
    cout << "Correct!";
    
    else
    cout<< "Wrong! The answer is "<< n1 - n2;
}