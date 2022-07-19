/* 
 * File:   main.cpp
 * Author: Mujahid Ahmad
 * Created on June 21, 2022, 8:11 Pm
 * Purpose:adding sales tax 
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
    float pur = 95, sst = .04, cst = .02, pst, total, pcst;
    pst = pur * sst;
    pcst = pur * cst;
    total = pst + pcst;
    cout << "total sales tax: " << total;
    
    
    
    
            
    
   
    return 0;
}