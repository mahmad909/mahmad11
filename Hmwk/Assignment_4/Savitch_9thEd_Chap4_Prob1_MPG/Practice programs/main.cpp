/* 
 * File:   main.cpp
 * Author: Mujahid ahmad
 * Created on July 14, 2022, 10:31 PM
 * Purpose:  
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

int max = 0;
int num = 0;
int min = 10000000;
    
    
while (num != -99){
    cin >> num;
    if (num==-99)break;
    if (num>max)
        max=num;
    if (num<min)
        min=num;
}
cout << "Smallest number in the series is " << min <<endl;
cout << "Largest  number in the series is " << max;
    return 0;
}