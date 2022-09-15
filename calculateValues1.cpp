#include <iostream>

using namespace std;

int main () {

        int N, pair, sumPair = 0, sumOdd = 0, totalSum =0;

        cout << "Insert a value N: ";
        cin >> N;

        for (int i = 1; i<= N; i++) {

            if (i%2 == 0) {

                pair = i * -1;

                sumPair += pair;
            } else {

                sumOdd += i;
            }
        
        }

        totalSum = sumPair + sumOdd;

        cout << "Result is: " << totalSum;

   

    return 0;
}