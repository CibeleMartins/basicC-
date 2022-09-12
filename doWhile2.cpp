#include <iostream>

using namespace std;

int main (int argc, char ** argv) {

    cout << "Function: " << argv[0] << endl;

    cout << argv[1] << endl;

    cout << argv[2] << endl;


    if (argc > 2) {

        cout << "Have more that two arguments" << endl;
    }

    return 0;
}