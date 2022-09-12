#include <iostream>

using namespace std;

int main () {

    int number;


    cout << "Isert a number: ";
    cin>>number;

    int cont = 0;

    while (cont < number)
    {
        cout << cont << endl;

        cont ++;
    }
    


    return 0;
}