/* 
 * File:   main.cpp
 * Author: Mujahid Ahmad
 * Created on June 21, 2022, 8:32 Pm
 * Purpose:Give two results to user   
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
    int classA = 15, classB = 12, classC = 9, 
        classAtickets, classBtickets,classCtickets,
        totalMoneyMade;
    
    cout << "How many tickets were sold for each Class?\n";
    cout << "Class A :";
    cin >> classAtickets;
    cout << "Class B :";
    cin >> classBtickets;
    cout << "Class C :";
    cin >> classCtickets;
    totalMoneyMade = (classC * classCtickets) + (classA * classAtickets) + 
            (classB * classBtickets);
    cout << "You sold a total of " << classAtickets << " Class A tickets," 
            << classBtickets << " Class B tickets, " 
            << classCtickets << " Class C tickets, for a total revenue of : "
            << "$" <<totalMoneyMade;
    
            
    
    
    
    //Exit the program
    return 0;
}