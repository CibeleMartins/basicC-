#include <iostream>
#include <stdlib.h>

using namespace std;



int main () {


    int sum = 0, N;


    cout << "Insert a value N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {

        sum += i;
    }

    cout << "Sum is: " << sum;
    

    return 0;
}