#include <iostream>

using namespace std;


int main (int argc, char ** nome) {


    char name='A';


    if (nome == name) {

        cout << "O parametro é igual a:  " << name;
    } else {

        cout << "O parametro nao é igual." << endl;
    }




    return 0;
}