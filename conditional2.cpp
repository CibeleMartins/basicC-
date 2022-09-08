#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main () {

    int number;

    cout << "Insert a number between 1 and 5: ";
    cin>>number;

    switch (number)
    {
    case 1:
        cout << "This is one!";
        break;
    case 2:
        cout << "This is two!";
        break;
    case 3:
        cout << "This is three!";
        break;
    case 4:
        cout << "This is four!";
        break;
    case 5:
        cout << "This is five!";
        break;
    default:
        cout << "This number bigger then 5";
    break;
    }

    return 0;
}