#include <iostream>


using namespace std;

int main () {

    float a,b,c,d, result = 0;



    cout << "Insert the value A:  ";
    cin>>a;

    cout << "Insert the value B:  ";
    cin>>b;

    cout << "Insert the value C:  ";
    cin>>c;

    cout << "Insert the value D:  ";
    cin>>d;


    result = (a + (b / (c - d)));

    cout << "Result: " << result;

    return 0;
}