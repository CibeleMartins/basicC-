#include <iostream>

using namespace std;

int main () {

    int numbers [11] = {1,2,3,4,5,6,7,8,9,10};

    int sum = 0;

    for (int i =0; i < sizeof numbers/ sizeof numbers[0]; i++) {

        sum += i;

    }

    cout << "Sum is: " << sum;


    return 0;
}