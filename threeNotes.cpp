#include <iostream>

using namespace std;


int main () {


    float pratice, teory, participation, finalMedia;


    cout << "Student, insert you note the of pratice:  ";
    cin >> pratice;

    cout << "Student, insert you note the of teory:  ";
    cin >> teory;

    cout << "Student, insert you note the of participation:  ";
    cin >> participation;

    pratice = pratice * 0.30;
    teory = teory * 0.60;
    participation = participation * 0.10;


    finalMedia = pratice + teory + participation;

    cout << "Student, your final media is:  " << finalMedia;
 

    return 0;
}