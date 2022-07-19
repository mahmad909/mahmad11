/* 
 * File:   main.cpp
 * Author: Mujahid Ahmad
 * Created on June 24, 2022, 12:32 Pm
 * Purpose:Finding price of gallon when adding in mileage to station   
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
    float gasgage = .75, sot = 22, mpg = 17, grf = 5.5, reggas1 = 4.25, mgs1 = 10,
          mtgs1 , gasreq1, c2f1, costtodrivetogas1, totalcosttofill1,totalCostPerGal1;
    
    
            /* sot = size of tank 
             * grf = gallons required for full
             mgs1 = Miles to gas station
             mtgs1 = miles to gas station 1
             totmiles = total miles to fuel up*/
    cout << "Gas station one cost per gallon is : ";
    // Gas station 1 reg gas is 4.25/g 
    // 10 miles to gas station and back
    mtgs1 = mgs1 * 2;
    gasreq1 = 22 - sot * gasgage;
    //This is how much gas is required to fill 5.5
    c2f1 = reggas1 * gasreq1;
    //This is how much it would cost to fuel up w/o travel expense$ 
    float gallonsUsedToTravel1;
    gallonsUsedToTravel1 = mtgs1 / mpg;
    costtodrivetogas1 = gallonsUsedToTravel1 * reggas1;
    // cost to drive distance to and from gas station$
    totalCostPerGal1 = costtodrivetogas1 + c2f1;
    float RealPricePerGal1;
    RealPricePerGal1 = totalCostPerGal1 / grf;
    cout << "$ " << RealPricePerGal1 << endl;
    
    cout << "Gas station Two cost per gallon is : ";
    float milesToGasStationActual2 , milesToGasStation2 = 20, gasRequiredForFullTank;   
    milesToGasStationActual2 = milesToGasStation2 * 2;
    // How many miles to travel to the gas station
    gasRequiredForFullTank = 22 - sot * gasgage;
    //How many gallons is needed for a full gas tank
    float regularPricePerGallon = 4.09, costToFill2;
    costToFill2 = regularPricePerGallon * gasRequiredForFullTank;
    //This is how much it would cost to fuel up w/o travel expense$ 
    float CostToDriveToGas2, gallonsUsedToTravel2;
    gallonsUsedToTravel2 = milesToGasStationActual2 / mpg;
    CostToDriveToGas2 = gallonsUsedToTravel2 * regularPricePerGallon;
    // cost to drive distance to and from gas station$
    float totalCostPerGal2;
    totalCostPerGal2 = CostToDriveToGas2 + costToFill2;
    //Total cost for a fuel tank with cost to drive to station + how much of fuel for full tank
    float RealPricePerGal2;
    RealPricePerGal2 = totalCostPerGal2 / grf;
    //Price of gas in $/Gallon 
    cout << "$ " << RealPricePerGal2;
    
            
            
            
    
    
    
    
    //Exit the program
    return 0;
}