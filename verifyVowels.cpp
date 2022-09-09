#include <iostream>

using namespace std;


int main () {


    char letter;

    cout << "Insert a letter: ";
    cin>>letter;


    // if ((letter == 'a') || (letter == 'e') || (letter == 'i') || (letter == 'o') || (letter == 'u')) {

    //     cout << "Is vowel!" << endl;
    // } else  {
    //     cout << "Is not vowel." << endl;
    // }

    switch (letter)
    {
    case 'a': cout << "Is a vowel!" << endl;
        break;

    case 'e': cout << "Is a vowel!" << endl;
        break;

    case 'i': cout << "Is a vowel!" << endl;
        break;

    case 'o': cout << "Is a vowel!" << endl;
        break;

    case 'u': cout << "Is a vowel!" << endl;
        break;

    case 'A': cout << "Is a vowel UPPERCASE!" << endl;
        break;

    case 'E': cout << "Is a vowel! UPPERCASE" << endl;
        break;

    case 'I': cout << "Is a vowel! UPPERCASE" << endl;
        break;

    case 'O': cout << "Is a vowel! UPPERCASE" << endl;
        break;

    case 'U': cout << "Is a vowel! UPPERCASE" << endl;
        break;

    default: cout << "Is not a vowel." << endl;
        break;
    }

    return 0;
}