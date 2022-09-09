#include <iostream>


using namespace std;


int main () {

    char character;


    cout << "Insert a letter: ";
    cin>>character;

    islower(character) ? cout << "Letter is lowercase" << endl : cout << "Is uppercase." << endl; 


    return 0;
}