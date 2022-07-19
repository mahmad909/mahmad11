/* 
 * File:   main.cpp
 * Author: Mujahid Ahmad
 * Created on June 21, 2022, 12:06 Am
 * Purpose:adding Customer items and taxes
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    
    //Initialize Variables
    
    //Map the inputs/known to the outputs
    
    //Display the outputs
    float p1 = 15.95, p2 = 24.95, p3 = 6.95, p4 = 12.95, p5 = 3.95, sbtot, stax, total;
    cout << "Item 1: ";
    cout << p1 <<endl;
    cout << "Item 2: ";
    cout << p2 <<endl;
    cout << "Item 3: ";
    cout << p3 <<endl;
    cout << "Item 4: ";
    cout << p4 <<endl;
    cout << "Item 5: ";
    cout << p5 <<endl;
    cout << "Sub total of all items: ";
    sbtot = p1 + p2 + p3 + p4 + p5;
    cout << sbtot << endl;
    cout << "Total in taxes: ";
    stax = sbtot * .07;
    cout << stax << endl;
    cout << "Total with taxes included: ";
    total = stax + sbtot;
    cout << total;
    
    
    
            

    
    
    
            
    
   
    return 0;
}