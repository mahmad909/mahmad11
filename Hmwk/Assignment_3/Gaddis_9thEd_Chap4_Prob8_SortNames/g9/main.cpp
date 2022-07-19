/* 
* File:   main.cpp
 * Author: Mujahid Ahmad
 * Created on July 12, 2022, 10:41
 * Purpose:  Sorting names
 */

//System Libraries
#include <iostream>
#include <string>//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    string name1;
    string name2;
    string name3;

    cout << "Sorting Names\n";

    cout << "Input 3 names\n";

    cin >> name1 >> name2 >> name3;

    if (name1 < name2 && name1 < name3) {
        
        cout << name1 << endl;

        if (name2 < name3) {

            cout << name2 << endl << name3 << endl;
        } else {
            cout << name3 << endl << name2;

        }

    } else if (name2 < name1 && name2 < name3) {
        cout << name2 << endl;

        if (name1 < name3) {
            cout << name1 << endl << name3;

        } else {
            cout << name3 << endl << name1;
        }
    } else if (name3 < name1 && name3 < name2) {
        cout << name3 << endl;

        if (name1 < name2) {
            cout << name1 << endl << name2;
        } else {
            cout << name2 << endl << name1;
        }

    } 
    return 0;
}