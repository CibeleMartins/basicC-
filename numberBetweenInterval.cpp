#include <iostream>

using namespace std;


int main () {


    int age;

    cout << "Insert your age:  ";
    cin >> age;

    if ((age >= 18) && (age <= 25)) {

        cout << "You have between 18  e 25 years." << endl;
        
    } else {

        cout << "You not have between 18  e 25 years." << endl;
    }

    return 0;
}