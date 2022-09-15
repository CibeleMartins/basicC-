#include <iostream>
#include <math.h>

using namespace std;

int main () {


    int N, elevation = 0, sum = 0;

    cout << "Insert a value N: ";
    cin >> N;

    for (int i = 1 ; i <= N ; i++) {

        elevation = pow(2,i);

        sum += elevation;


    };


    cout << "Result is: "<< sum;
   


    return 0;
}