#include <iostream>

using namespace std;


int main () {


    float numberOne;
    float numberTwo;

    cout << "Insert a number one:  ";
    cin>>numberOne;

    cout << "Insert a number two:  ";
    cin>>numberTwo;

    if (numberOne > numberTwo) {

        cout << "Number one is bigger then number two.";

    } else {

        cout << "Number one is smaller then number two.";
    }



    return 0;
}


