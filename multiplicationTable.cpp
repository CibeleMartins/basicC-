#include <iostream>


using namespace std;

int main () {

    int number;

    cout << "User, insert a number of the 1 to 10, please: ";
    cin>>number;

    if (number <= 10) {

   
        cout << "Multiplication Table" << endl;

        for (int i = 0; i <= 10; i++) {

            cout << number << " x " << i << " = " << number*i << endl;
        }

    } else {

        cout << "Plese, insert a number between 1 and 10." << endl;

        cin>>number;

        cout << "Multiplication Table" << endl;

        for (int i = 0; i < 10; i++) {

            cout << number << " x " << i + 1 << " = " << number*i << endl;
        }

    }



    return 0;
}