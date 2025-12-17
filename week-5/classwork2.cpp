#include<iostream>
using namespace std;
int main(){
    int zodiac;

    cout<<"Enter the zodiac =====>";
    cin>>zodiac;
switch(zodiac){
        case 1:
            cout<< "monkey";
            break;
        case 2:
            cout<< "rooster";
            break;
        case 4:
            cout<< "dog";
            break;
        case 5:
            cout<< "pig";
            break;
        case 6:
            cout<< "rat";
            break;
        case 7:
            cout<< "ox";
            break;
         case 8:
            cout<< "tiger";
            break;
         case 9:
            cout<< "rabbit";
            break;
        case 10:
            cout<< "snake";
            break;
        case 11:
            cout<< "horse";
            break;
        case 12:
            cout<< "sheep";
            break;
        case 0:
            cout<< "gazelle";
            break;
        default:
        cout<<"NOT A Zodiac";
}        
}