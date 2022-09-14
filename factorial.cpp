#include <iostream>

using namespace std;


int main () {


    int multiplication = 1, sum = 0, N;

    cout << "Insert a number: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {

        multiplication = multiplication * i;

        sum += multiplication;
    }

    cout << "Result is: " << sum << endl;

    return 0;
}