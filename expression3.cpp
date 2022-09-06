#include <iostream>


using namespace std;

int main () {


    float a, b, c, d, e, f, division1 = 0, division2 = 0, result = 0;


    cout << "Insert the value A: " ;
    cin>>a;

    cout << "Insert the value B: " ;
    cin>>b;

    cout << "Insert the value C: " ;
    cin>>c;

    cout << "Insert the value D: " ;
    cin>>d;

    cout << "Insert the value E: " ;
    cin>>e;

    cout << "Insert the value F: " ;
    cin>>f;


    division1 = b / c;

    division2 = e / f;

    result = (a + division1) / (d + division2);

    // cout.precision();

    cout << "Result:  " << result;

    return 0;
}