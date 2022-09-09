#include <iostream>


using namespace std;

int main () {


    int number;

    cout << "Insert a number:  ";
    cin>>number;

    switch (number % 2)
    {
    case 0: cout << "Number is pair";
        break;
    
    default: cout << "Number is odd";
        break;
    }

    return 0;
}