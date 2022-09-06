#include <iostream>
#include <math.h>

using namespace std;


int main () {


    float peccarie1, peccarie2;

    float hipotenuse;

    cout << "User, insert the value the of primary peccarie: ";
    cin>>peccarie1;

    cout << "User, insert the value the of second peccarie: ";
    cin>>peccarie2;

    hipotenuse = sqrt(pow(peccarie1, 2) + pow(peccarie2, 2));

    cout << "The Hipotenuse of the triangle retangle is:  " << hipotenuse;

    return 0;
}