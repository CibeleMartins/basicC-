#include <iostream>

using namespace std;

int main () {


    float ex1, ex2, ex3;

    int studentsAprovedsAll = 0, studentsAprovedOne = 0, studentsAprovedUnique = 0;

    for (int i = 1; i <= 5; i++) {
        
        cout << "Insert a note of the ex1: ";
        cin>> ex1;
        cout << "Insert a note of the ex2: ";
        cin>> ex2;
        cout << "Insert a note of the ex3: ";
        cin>> ex3;

        if ((ex1 > 10.5) && (ex2 > 10.5) && (ex3 > 10.5)) {
            studentsAprovedsAll++;
        }

        if ((ex1 > 10.5) || (ex2 > 10.5) || (ex3 > 10.5)) {
            studentsAprovedOne++;

        } 

        if ((ex1 < 10.5) && (ex2 < 10.5) && (ex3 > 10.5)) {
            studentsAprovedUnique++;

        } 
    }
        cout << "The students aproveds in all exames: "<< studentsAprovedsAll << endl;
        cout << "The students aproveds in one exame: " << studentsAprovedOne << endl;
        cout << "The students aproved in unique exame: " << studentsAprovedUnique << endl;



    return 0;
}