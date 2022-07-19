/* 
* File:   main.cpp
 * Author: Mujahid Ahmad
 * Created on July 12, 2022, 10:41
 * Purpose:  Book worm
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    int booksBought;

    cout << "Book Worm Points\n";

    cout << "Input the number of books purchased this month.\n";

    cin >> booksBought;

    cout << "Books purchased =  " << booksBought << endl;


    if (booksBought == 0) {
        cout << "Points earned   = 0";  
    } else if (booksBought == 1) {
        cout << "Points earned   = 5";
    } else if (booksBought == 2) {
        cout << "Points earned   = 15";
    } else if (booksBought == 3) {
        cout << "Points earned   = 30";
    } else if (booksBought >= 4) {
        cout << "Points earned   = 60";
    }


    return 0;
}