#include <iostream>


using namespace std;


int main () {

    float initial_balance = 1000;
    int option;
    float add_cash;
    float get_cash;
    float final_balance;

    cout << "Welcome in your cash machine!" << endl;
    cout << "Press 1 for insert cash" << endl;
    cout << "Press 2 for take cash" << endl;

    cin>>option;

    if (option == 1) {

        cout << "Insert cash:";
        cin>>add_cash;

      final_balance =  initial_balance + add_cash;

      cout << "You add " << add_cash << "." << " Your final balance is:  " << final_balance;

    } else {

        cout << "Take a cash: ";
        cin>>get_cash;

        final_balance = initial_balance - get_cash;

        cout << "You take " << get_cash << "." << " Your final balance is:  " << final_balance;
    }



    return 0;
}