/* 
* File:   main.cpp
 * Author: Mujahid Ahmad
 * Created on July 12, 2022, 10:41
 * Purpose:  Bank Balance
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

int main(int argc, char** argv) {
    float beginningBalance;
    const float MONTHLY_CHARGE = 10.00;
    int checks;
    float checkFee;
    float balanceFee;
    float endingBalance;
    float perCheckFee;
    float lowBalanceFee = 0;

    cout << "Monthly Bank Fees\n";
    cout << "Input Current Bank Balance and Number of Checks\n";
    cin >> beginningBalance;
    cin >> checks;


    endingBalance = beginningBalance;

    if (checks < 0) {
        return 0;
    }
    if (beginningBalance < 0) {
        cout << "You're overdrawn";
    }

    if (beginningBalance < 400) {
        lowBalanceFee = 15;
    }

    if (checks < 20) {
        perCheckFee = 0.10;
    } else if (checks < 40) {
        perCheckFee = 0.08;
    } else if (checks < 60) {
        perCheckFee = 0.06;
    } else {
        perCheckFee = 0.04;
    }
    checkFee = checks * perCheckFee;

    float fees;
    fees = checkFee + lowBalanceFee + MONTHLY_CHARGE; 
    endingBalance = beginningBalance- fees;
    
    cout << right <<fixed << setprecision(2) <<"Balance     $"<<setw(9)<<right << beginningBalance << endl;
    cout << right << fixed << setprecision(2) <<"Check Fee   $" <<setw(9)<<right<< checkFee << endl;
    cout << right <<fixed << setprecision(2) <<"Monthly Fee $" <<setw(9)<<right<< MONTHLY_CHARGE << endl;
    cout << right << fixed << setprecision(2) <<"Low Balance $" <<setw(9)<<right<< lowBalanceFee << endl;
    cout << right <<fixed << setprecision(2) <<"New Balance $" <<setw(9)<<right<< endingBalance;

    return 0;
}