#include <iostream>


using namespace std;


int main () {

    float saldo_inicial = 1000;
    int option;
    float add_cash;
    float get_cash;
    float saldo_final;

    cout << "Welcome in your cash machine!" << endl;
    cout << "Press 1 for insert cash" << endl;
    cout << "Press 2 for take cash" << endl;

    cin>>option;

    if (option == 1) {

        cout << "Insert cash:";
        cin>>add_cash;

      saldo_final =  saldo_inicial + add_cash;

      cout << "You add " << add_cash << "." << " Your final balance is:  " << saldo_final;

    } else {

        cout << "Take a cash: ";
        cin>>get_cash;

        saldo_final = saldo_inicial - get_cash;

        cout << "You take " << get_cash << "." << " Your final balance is:  " << saldo_final;
    }



    return 0;
}