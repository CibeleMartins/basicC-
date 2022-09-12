
#include <iostream>
#include <math.h>

using namespace std;


int main () {

    int sum = 0, square;

    for (int i = 0; i <= 10; i++) {

        square = i * i;

        sum += square;

    }


      cout << "Result: " << sum << endl;



    return 0;
}
