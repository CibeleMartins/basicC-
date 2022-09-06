#include <iostream>

using namespace std;

int main () {

    float price, iva, finalPrice;

    cout << "Insert the price of the product:  "; cin>>price;

    iva = price * 0.21;


    finalPrice = price + iva;

    cout << "The price of the product more the imposte is:  " << finalPrice << endl;
    
    return 0;
}