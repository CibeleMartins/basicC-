#include <iostream>

using namespace std;


int main () {

    int number;

    cout << "Insert a number:  ";
    cin>>number;

    number < 0 ? cout << "It is negative." << endl : cout << "it is positive" << endl;

    return 0;
}