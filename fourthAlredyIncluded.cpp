#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {


//     int n1, n2, n3, fourthNumber;

//     vector <int> arr;

//     cout << "Insert a number one:  ";
//     cin >> n1;

//     cout << "Insert a number two:  ";
//     cin >> n2;

//     cout << "Insert a number two:  ";
//     cin >> n3;

//     arr.push_back(n1);
//     arr.push_back(n2);
//     arr.push_back(n3);

//     for (int i = 0; i < arr.size(); i++) {

//         cout << "The numbers inserted is:  " << arr[i] << endl;
//     }

//     cout << "Insert a fourth number:  ";
//     cin>>fourthNumber;
    

//    for (int i = 0; i < arr.size(); i++ ) {

//     *find(arr.begin(), )

    // fourthNumber ? cout<< "yes" : cout << "no"; 

    //    arr[i] == fourthNumber ? cout << fourthNumber << " already include" : 
    //    cout << fourthNumber << " is not included" << endl;
//    }

    int n1, n2, n3, n4 = 10;

    cout << "Insert a number one:  ";
    cin >> n1;

    cout << "Insert a number two:  ";
    cin >> n2;

    cout << "Insert a number two:  ";
    cin >> n3;

    cout << n1 << " " << n2 << " " << n3 << endl;

    cout << "Insert a number fourth: ";
    cin>>n4;

    if (n1 == n4 || n2 == n4 || n3 == n4) {
        cout<< "Exists a number introduced that is equal at fourth number";
    } else {

        cout << "Not have numbers equal at fourth number.";
    }

    return 0;
}