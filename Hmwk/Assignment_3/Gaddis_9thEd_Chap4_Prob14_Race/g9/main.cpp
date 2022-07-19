/* 
* File:   main.cpp
 * Author: Mujahid Ahmad
 * Created on July 12, 2022, 10:41
 * Purpose:  Racing time
 */

//System Libraries
#include <iostream> 
#include <iomanip>

//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    string runner1, runner2, runner3;
    int time1, time2, time3;

    cout << "Race Ranking Program\n";
    cout << "Input 3 Runners\n";
    cin >> runner1 >> time1;
    cin >> runner2 >> time2;
    cin >> runner3 >> time3;

    cout << "Their names, then their times\n";

    if (time1 < time2 && time1 < time3) {
        cout << "" << runner1 << "\t" << setw(3)<< time1 << endl;

        if (time2 < time3) {
            cout << "" << runner2 << "\t" << setw(3)<< time2 << endl;
            cout << "" << runner3 << setw(3) << time3;
        
        } else if (time3 < time2) {
            cout << "" << runner3 << "\t" << setw(3) << time3 << endl;
            cout << "" << runner2 << "\t" << setw(3)<< time2;

        }
    } else if (time2 < time1 && time2 < time3) {
        cout << "" << runner2 << "\t" << setw(3)<< time2 << endl;
       
        if (time1 < time3) {
            cout << "" << runner1 << "\t" << setw(3)<< time1 << endl;
            cout << "" << runner3 << "\t" << setw(3) << time3;
        
        } else if (time3 < time1) {
            cout << "" << runner3 << "\t" << setw(3) << time3 << endl;
            cout << "" << runner2<< "\t" << setw(3)<< time2;
        }
    } else if (time3 < time2 && time3 < time1) {
        cout << "" << runner3 << "\t" << setw(3) << time3 << endl;
        
        if (time2 < time1) {
            cout << "" << runner2 << "\t"<< setw(3) << time2 << endl;
            cout << "" << runner1 << "\t" << setw(3)<< time1;
        
        } else if (time1 < time2) {
            cout << "" << runner1 << "\t"<< setw(3)<< time1 << endl;
            cout << "" << runner2 << "\t" << setw(3)<< time2;

        }
    } else {
        cout << "Error! Please restart the program and input a positive value\n";
    }

    return 0;
}