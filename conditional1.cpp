#include <iostream>
#include <cstring>

using namespace std;

int main () {

    char word [10];

    cout << "Insert a word: ";
    cin>>word;

    if (strlen(word) > 5) {

        cout << "Your word is bigger then 5";
    } else {


        cout << "Your word is not bigger then 5";
    }


    return 0;
}