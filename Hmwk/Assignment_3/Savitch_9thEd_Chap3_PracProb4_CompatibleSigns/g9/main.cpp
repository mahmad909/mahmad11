/* 
* File:   main.cpp
 * Author: Mujahid Ahmad
 * Created on July 12, 2022, 10:41
 * Purpose:  Rock paper scissors
 */

//System Level Libraries
#include <iostream>
#include <iomanip>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!

//Execution Begins Here!
int main (int argc, char** argv) {
//Set the random number seed
srand(static_cast<unsigned int>(time(0) ) );
//Declare Variables

char pl, p2;
//Initialize or input i.e. set variable values
cout << "Rock Paper Scissors Game" <<endl;
cout << "Input Player 1 and Player 2 Choices" <<endl;
cin >> pl >> p2;

//Map inputs to outputs -> The Process
if (pl == p2)
    cout << "Nobody wins" << endl;
if( (pl == 'P' && p2 == 'p' ) || (pl == 'P' && p2 == 'P' ) )
    cout << "Nobody wins";
if ( (pl == 'S' && p2 == 's' ) || (pl == 'S' && p2 == 's' ) )
    cout << "Nobody wins";

if( (pl == 'R' && p2 == 'r' ) || (pl == 'R' && p2 == 'r' ) )
    cout << "Nobody wins" << endl;
if ( (pl == 'P' || pl == 'p') && (p2 == 'R' || p2 == 'r' ))
    cout << "Paper covers rock.";
if ( (pl == 'R' || pl == 'r' ) && (p2 == 'P' || p2 == 'p' ))

    cout << "Paper covers rock.";
if ( (pl == 'R' || pl == 'r') && (p2 == 'S' || p2 == 's' ) )
    cout << "Rock breaks scissors.";
if ( (pl == 'S' || pl == 's' ) && (p2 == 'R' || p2 == 'r' ) )
    cout << "Rock breaks scissors.";

if ( (pl == 'P' || pl == 'p' ) && (p2 == 'S' || p2 == 's' ) )
    cout << "Scissors cuts paper.";
if ( (pl == 'S' || pl == 's') && (p2 == 'P' || p2 == 'p'))
    cout << "Scissors cuts paper." ;
//Display the outputs


    return 0;
}