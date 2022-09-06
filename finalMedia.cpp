#include <iostream>

using namespace std;

int main () {


    float note1, note2, note3, note4;
    float sum;
    float finalMedia;

    cout << "Student 1, insert your note: ";
    cin>>note1;

    cout << "Student 2, insert your note: ";
    cin>>note2;

    cout << "Student 3, insert your note: ";
    cin>>note3;

    cout << "Student 4, insert your note: ";
    cin>>note4;

    sum = note1 + note2 + note3 + note4;

    finalMedia = sum / 4;

    cout << "The final media of the students is:  " << finalMedia;


    return 0;
}