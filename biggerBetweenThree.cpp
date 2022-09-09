#include <iostream>


using namespace std;


int main () {


    int n1, n2, n3;


    cout << "Insert the primary number:  ";
    cin>>n1;

    cout << "Insert the second number:  ";
    cin>>n2;

    cout << "Insert the third number:  ";
    cin>>n3;


    if ((n1 > n2) && (n1 > n3)) {

        cout << "Number one is bigger!!!";
    } else if ((n2 > n1) && (n2 > n3)) {

        cout << "Number two is bigger!!!";
    } else {

        cout << "Number three is bigger!!!";
    }

    return 0;
}