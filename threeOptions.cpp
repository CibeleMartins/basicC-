#include <iostream>

using namespace std;


int main () {


    int number;
    int opc;
    float cube;
    float pairOrOdd;


    cout << "Insert a number:  " << endl;
    cin>>number;
    cout << "For see cube the number digit 1 " << endl;
    cout << "For see if the number is par or odd digit 2 " << endl;
    cout << "For logout digit 3 " << endl;
    cin>>opc;

    switch (opc)
    {
    case 1: cube = number * 3; cout << "The cube of the number is: " << cube;
        break;

    case 2: number % 2 == 0 ? cout << "Is pair" : cout << "Is odd";
        break;
    
    default:

        cout << "Logout.";
        break;
    }


    return 0;

}