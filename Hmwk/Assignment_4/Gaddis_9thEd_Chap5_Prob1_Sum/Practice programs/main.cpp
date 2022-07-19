/* 
* File:   main.cpp
 * Author: Mujahid Ahmad
 * Created on July 14, 2022, 10:41
 * Purpose:  Rock paper scissors
 */

//System Libraries
#include <iostream> 
#include <iomanip>
#include <string>

//Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

    int userInput;
    int addition = 0;
    cin >> userInput;
    
    for (int i = 0; i <= userInput; i++){
        
        addition += i;
        
    }
    cout <<"Sum = " << addition;
    }

