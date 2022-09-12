#include <iostream>

using namespace std;


int main () {

        float temperature, bigger = 0, smaller = 9999999;
        float sumTemperatures = 0, media = 0;


        for (int i = 0; i < 24; i = i + 4) {

            cout << "Insert the temprature of the hour " << i << ": ";
            cin>>temperature;

            sumTemperatures += temperature;

            if (temperature > bigger) {

                bigger = temperature;
            }

            if (temperature < smaller) {

                smaller = temperature;
            }
        }

        media = sumTemperatures / 6;

        cout << "The media of the temperatures during day is: " << media << endl;
        cout << "The bigger temperature is: " << bigger << endl;
        cout << "The smaller temperture is: " << smaller << endl;


    return 0;
}