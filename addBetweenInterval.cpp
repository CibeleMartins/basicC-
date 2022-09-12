#include <iostream>

using namespace std;


int main () {

    int number, sum = 0;

    do {

        cout << "Insert a number:  ";
        cin >> number;

        if (number > 0) {

            sum += number;
        }
    } while (((number < 20 || number > 30) && (number != 0)));


    cout << "The sum of the integers is: " << sum << endl;


    return 0;
}