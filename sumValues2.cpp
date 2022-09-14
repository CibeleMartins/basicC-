#include <iostream>

using namespace std;


int main () {


    int sum = 0, N;

    cout << "User, insert a number N, please: ";
    cin >> N;


    for ( int i = 1; i <= 2 * N - 1; i+= 2) {

        sum += i;
    };


    cout << "Sum is: " << sum;

    return 0;
}