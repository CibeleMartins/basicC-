#include <iostream>

using namespace std;


int main () {

    int x,y, aux;

    cout << "Insert a value X:  ";
    cin>>x;

    cout << "Insert value Y:  ";
    cin>>y;

    aux = x;

    x = y;

    y = aux;

    cout << "X: " << x <<" "<< "Y: " << y;

    return 0;
}