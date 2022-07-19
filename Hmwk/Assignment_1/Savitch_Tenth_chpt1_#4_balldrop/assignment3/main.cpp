/* 
 * File:   main.cpp
 * Author: Mujahid Ahmad
 * Created on June 22, 2022, 10:33 Am
 * Purpose:Including your favorite number and displaying it  
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
    int dist1, dist2, acc = 32, time, timesq, q = 2;
    cout << "Let's find out how far a ball will drop!\n";
    cout << "Enter how many seconds do you wish to calculate:\n";
    cin >> time;
    timesq = time * time;
    dist1 = timesq * acc;
    dist2 = dist1 / q;
    cout << "The ball will drop ";
    cout << dist2 << " Feet in " << time << " Seconds";
            
           
    
   
    
    
    
    //Exit the program
    return 0;
}