#include <iostream>
#include <string>   

using namespace std;

int main() {

    string name;
    bool isPauStudent;
    int course, location;   

    cout << "Enter Full Name===> ";
    getline(cin, name);

    cout << "IS Pau student (1 for true, 0 for false): ";   
    int flag;
    cin >> flag;
    isPauStudent = (flag != 0);

    cout << "Enter course (1-5): \n"
         << "1 -- Photography \n"
         << "2 -- Painting \n"
         << "3 -- Fish Farming \n"
         << "4 -- Baking \n"
         << "5 -- Public Speaking\n";
    cin >> course;

    cout << "Enter location (1 -5):\n"
         << "1 -- Camp House A \n"
         << "2 -- Camp House B \n"
         << "3 -- Camp House C \n"
         << "4 -- Camp House D \n"
         << "5 -- Camp House E\n ";
    cin >> location;

    // Map choices 
    string courseName;
    int days = 0;
    double regFee = 0.0;

    if (course == 1) {
        courseName = "Photography";
        days = 3;
        regFee = 10000;
    } 
    else if (course == 2) {
        courseName = "Painting";
        days = 5;
        regFee = 8000;
    } 
    else if (course == 3) {
        courseName = "Fish Farming";
        days = 7;
        regFee = 15000;
    } 
    else if (course == 4) {
        courseName = "Baking";
        days = 5;
        regFee = 13000;
    } 
    else if (course == 5) {
        courseName = "Public Speaking";
        days = 3;
        regFee = 5000;
    } 
    else {
        cout << "Invalid course selection \n";
        return 1;
    }

    // Location code
    string locName;
    double logingPerDay = 0.0;

    if(location ==1){
        locName = "Camp House A";
        logingPerDay = 10000;
    }
    else if (location == 2){
        locName = "Camp House B";
        logingPerDay = 2500;
    }
     else if (location == 3 ){
        locName = "Camp House C ";
        logingPerDay = 5000;
    }
     else if (location == 4){
        locName = "Camp House D";
        logingPerDay = 2500;
    }

     else if (location == 5){
        locName = "Camp House E";
        logingPerDay = 5000;
    }

    else {
        cout<< "Invalid location selection.\n";
        return 1;
    }

    // Base costs
    double lodgingcost = lodgingPerDay * days;
    double lodgingDiscount = 0.0 ;
    if (isPauStudent &&(location == 1 || location == 2)){
        lodgingDiscount = 0.05 * lodgingcost;
    }
    if((days > 5) ||(regFee > 12000)){
        regDiscount = 0.03 * regFee
    }
    double regDiscountAfter = regFee  - regDiscount;

    double total = regDiscountAfter + lodgingcostAfter;

    cout<<"Name:"<<name "\n";
    cout<<"Pau student:"<<(isPauStudent ? "YES": "NO")<<"\n";
    cout<<"Course: "<<courseName<<"\n";
    cout<<"Number of days:"<<days<< "\n";
    cout<<"Registration Fee "<<regFee<< "\n";
    cout<<"Location:"<<locName<<"\n";
    cout<< "Lodging Fee per day :" <<logingPerDay<<"\n";
    cout<<"Total lodging costs:"<<lodgingcost<<"\n";
    cout<<"Total lodging cost :"<<lodgingcost<<"\n";


    cout << "========================";

    // cout << name;

    return 0;
}
