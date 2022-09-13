#include <iostream>

using namespace std;

int main () {

    int x, y;

    int elevated = 1;


        cout<< "Insert value X: ";
        cin>>x;

        cout<< "Insert value Y: ";
        cin>>y;

        for (int i = 1 ; i <= y ; i++) {

            elevated = elevated * x;

        };

 
        cout << "Result is: " << elevated;

    return 0;
}