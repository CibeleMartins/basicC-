#include <iostream>

using namespace std;

int main () {

    int n1, n2, sum = 0, sub = 0, multiply = 0, division = 0;

    cout << "Insert a number:  "; cin >> n1;

    cout << "Insert other number:  "; cin >> n2;

    sum = n1 + n2;
    sub = n1 - n2;
    multiply = n1 * n2;
    division = n1 / n2;

    cout << "The sum of the numbers is: " << sum << endl;
    cout << "The sub of the numbers is: " << sub << endl;
    cout << "The multiply of the numbers is: " << multiply << endl;
    cout << "The division of the numbers is: " << division << endl;

}