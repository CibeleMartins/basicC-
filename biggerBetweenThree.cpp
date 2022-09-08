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


    switch (n1, n2, n3)
    {
    case 1 > n2 : cout << "N1 is bigger then n2.";
        break;
    
    default:
        break;
    }
}