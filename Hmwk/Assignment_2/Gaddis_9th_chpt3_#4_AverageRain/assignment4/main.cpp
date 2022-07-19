/* 
 * File:   main.cpp
 * Author: Mujahid Ahmad
 * Created on June 27, 2022, 7:12 Pm
 * Purpose:Average Rainfall    
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
    string month1, month2, month3;
    float inches1, inches2, inches3;
    
    cout << "Please enter the month and the amount of rain (in inches)\n";
    cout << "Month one : ";
    cin >> month1;
    cout << "Inches : ";
    cin >> inches1;
    cout << "Month two : ";
    cin >> month2;
    cout << "Inches : ";
    cin >> inches2;
    cout << "Month three : ";
    cin >> month3;
    cout << "Inches : ";
    cin >> inches3;
    
    float averageRain;
    
    averageRain = (inches1 + inches2 + inches3)/3;
    cout << averageRain << "Inches";
            
    

            
    
    
    
    //Exit the program
    return 0;
}