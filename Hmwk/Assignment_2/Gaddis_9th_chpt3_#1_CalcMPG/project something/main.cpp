/* 
 * File:   main.cpp
 * Author: Mujahid Ahmad
 * Created on June 24, 2022, 1:15 m
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
   
    // p stands for price of product
    // Number after p stands for which product it is
    // Sbtot = subtotal, Stax = state tax, total = sub total + state tax
    
    //Listing off each item with their price
    float maxGallonsOfGas, milesPerTank;
    cout <<"Please enter your gallons of gas per full tank & max mileage\n";
    cout <<"Gallons of Gas :";
    cin >> maxGallonsOfGas;
    cout <<"Max mileage :";
    cin >> milesPerTank;
    float MPG;
    MPG = milesPerTank/maxGallonsOfGas;
    cout << "Your miles driven per gallon will be :" << MPG  <<endl;
  
    return 0;
}