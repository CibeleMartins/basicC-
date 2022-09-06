#include <iostream>
#include <math.h>

using namespace std;


int main () {


    float x, y, result;

    cout << "Insert value X:  ";
    cin>>x;

    cout << "Insert value Y:  ";
    cin>>y;

    result = sqrt(x) / (pow(y,2) - 1);

    cout.precision(3);

    cout<< "Result is: " << result;

    return 0;

}



