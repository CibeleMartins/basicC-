#include <iostream>

using namespace std;

int main () {

    float a,b,c,d, result = 0;

    cout << "Insert value A:  ";
    cin>>a;
    cout << "Insert value B:  ";
    cin>>b;
    cout << "Insert value C:  ";
    cin>>c;
    cout << "Insert value D:  ";
    cin>>d;

    result = (a + b) / (c + d);

    cout << "Result is:  " << result;

    return 0;
}