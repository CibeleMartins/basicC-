#include <iostream>

using namespace std;


int main () {

    int number, count = 0;

    do {

        cout << "Insert a number: ";
        cin>>number;

        if (number > 0) {

            count++;
        }

    } while (number != 0);


    cout << "Finalizing program..." << endl;

    return 0;
}