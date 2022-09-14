#include <iostream>

using namespace std;

int main () {

    int multiplication = 1, N;


    cout << "Insert a number: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {

        multiplication = multiplication * i;
    }

    cout << "Result is: " << multiplication;

    return 0;
}