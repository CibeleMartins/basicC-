#include <iostream>

using namespace std;


int main () {


    int number, numberInserted = 2458;


    cout << "Guess the number stored!";
    cout << "Tip: Three houses decimals";

    cout << "Insert a number:  ";
    cin>>numberInserted;


    if (numberInserted == 2458) {

        cout << "Your got it right!";

    } else {

        cout << "Wrong!";
    }


    return 0;
}