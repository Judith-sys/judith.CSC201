#include <iostream>

using namespace std;

int main(){

    string name;
    bool isPauStudent;
    
    cout<<"Enter Full Name===> ";
    getline(cin, name);

    cout<<"IS Pau student (1 for true, 0 for false";
    int flag;
    cin>> flag;
    isPauStudent = (flag != 0);

    cout<< "Enter course (1-5): \n"
    << "1 -- Photography \n"
    << "2 -- Painting \n"
    << "3 -- Fish Farming \n"
    << "4 -- Baking \n"
    <<"5 -- Public Speaking\n";
    cin>>course;

    cout<<"Enter location (1 -5):\n"
    <<"1 -- Comp House A \n"
    <<"2 -- Camp House B \n"
    <<"3 --camp House C \n"
    <<"4 -- Camp House D \n"
    <<"5 -- Camp House E\n ";
    cin>>location;

    //             2..Map choices (multi -way if -else)
    string courseName;
    int days = 0;
    double regFee = 0.0;

    if (course ==1 ){
        courseName = "Photography";
        days = 3;
        regFee = 10000;
    }

   
    else if (course == 2){
        courseName = "Painting";
        days = 5;
        regFee = 8000;

    }
    else if (course == 3){
    courseName = "Fish farming";
        days = 7;
        regFee = 15000;

    }

    else if (course == 4){
       courseName = "Baking";
        days = 5;
        regFee = 13000;
    }
    else if (course == 5){
       courseName = "Public Speaking";
        days = 3;
        regFee = 5000;
    }
    else {
        cout<<"Invalid course selection \n";
        return 1;
    }

    //  Location code 
    string locName;
    double logingPerDay = 0.0;
    cout<<"========================";
   
   
   // cout<<name;

    return 0;
}