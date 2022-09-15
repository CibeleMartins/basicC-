#include <iostream>

using namespace std;

int main () {

    int N, x=0, y=1, z=1;

    cout << "Insert value: "; 
    cin >> N;

    for (int i = 1; i < N; i++) {

       z = x + y;
       cout <<z<< " ";

       x = y;
       y = z;
    }



    return 0;
}