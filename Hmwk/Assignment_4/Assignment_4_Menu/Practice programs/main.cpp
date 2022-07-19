//System Libraries
#include <iostream> 
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>//Input/Output Library
using namespace std; //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
float calc(int, int, const float);

double max(double x, double y) {
    if (x > y) return x;
    else return y;
}

double max(double x, double y, double z) {
    double temp = max(x, y);
    if (temp > z) return temp;
    else return z;
}
float calcInflation(float current_cost, float previous_cost);
float const LITER = 0.264172;
float mGALLON(int ml, int lt);

int main(int argc, char** argv) {
    //Set random number seed once here

    //Declare variables here
    int choose; //Choose a problem

    //Initialize variables here
    do {
        //List of Problems which can be run by the program
        cout << "Choose from the following Menu Items" << endl;
        cout << "Problem 0 - Gaddis_9thEd_Chap5_Prob1_Sum" << endl;
        cout << "Problem 1 - Gaddis_9thEd_Chap5_Prob7_PayInPennies" << endl;
        cout << "Problem 2 - Gaddis_9thEd_Chap5_Prob13_MinMax" << endl;
        cout << "problem 3 - Gaddis_9thEd_Chap5_Prob22_Rectangle" << endl;
        cout << "problem 4 - Gaddis_9thEd_Chap5_Prob23_Pattern" << endl;
        cout << "problem 5 - Savitch_9thEd_Chap4_Prob1_MPG" << endl;
        cout << "problem 6 - Savitch_9Ed_Chap4_Prob2_FuelEff" << endl;
        cout << "problem 7 - Savitch_9Ed_Chap4_Prob4_Inflation" << endl;
        cout << "problem 8 - Savitch_9Ed_Chap4_Prob5_EstCost" << endl;
        cout << "problem 9 - Savitch_9Ed_Chap4_Prob9_2or3Max" << endl;
        cout << "10 or greater, all negatives to exit" << endl;
        cin>>choose;

        switch (choose) {
            case 0:
            {

                int userInput;
                int addition = 0;
                cin >> userInput;

                for (int i = 0; i <= userInput; i++) {

                    addition += i;

                }
                cout << "Sum = " << addition;

                break;
            }
            case 1:
            {
                int num;
                int days;
                double pay;
                double total;

                num = 1;
                pay = 0.01;
                total = 0;

                cin >> days;

                while (days < 1) {
                    cout << "Number of days worked must be a least 1";
                }
                while (num <= days) {
                    total = total + pay;
                    pay = pay * 2;
                    num++;
                }

                cout << fixed << setprecision(2);
                cout << "Pay = $" << total;
                break;
            }
            case 2:
            {
                int max = 0;
                int num = 0;
                int min = 10000000;


                while (num != -99) {
                    cin >> num;
                    if (num == -99)break;
                    if (num > max)
                        max = num;
                    if (num < min)
                        min = num;
                }
                cout << "Smallest number in the series is " << min << endl;
                cout << "Largest  number in the series is " << max;
                break;
            }
            case 3:
            {
                int rectangleLength;
                char letter;

                cin >> rectangleLength;
                cin >> letter;

                for (int i = 0; i < rectangleLength; i++) {
                    for (int j = 0; j < rectangleLength; j++) {
                        cout << letter;
                    }
                    if (i != rectangleLength - 1) {
                        cout << endl;
                    }
                }
                break;
            }
            case 4:
            {
                int userInput;

                cin >> userInput;

                for (int i = 1; i <= userInput; i++) {
                    for (int j = 1; j <= i; j++) {
                        cout << "+";
                    }
                    cout << endl << endl;
                }
                for (int i = 1; i <= userInput; i++) {
                    for (int j = 1; j <= userInput + 1 - i; j++) {
                        cout << "+";
                    }
                    if (i < userInput) cout << endl << endl;
                }
                break;
            }
            case 5:
            {
                const float liter = 0.264179;
                int userLit;
                float totalGals;
                int milesDriven;
                float milesPerGal;
                char cont;

                do {
                    cout << "Enter number of liters of gasoline:\n";
                    cin >> userLit;
                    cout << endl;

                    cout << "Enter number of miles traveled:\n";
                    cin >> milesDriven;
                    cout << endl;

                    cout << "miles per gallon:\n";



                    cout << fixed << setprecision(2) << calc(userLit, milesDriven, liter) << endl;

                    cout << "Again:\n";



                    cin >> cont;

                    if (cont == 'Y' || cont == 'y') {
                        cout << endl;
                    }

                } while (cont == 'Y' || cont == 'y');
                break;
            }
            case 6:
            {
                int lt;
                float ml;
                float MPG, MPG2;
                char repeat;
                //Initialize or input i.e. set variable values

                //Map inputs -> outputs

                //Display the outputs
                do {

                    cout << "Car 1" << endl;
                    cout << "Enter number of liters of gasoline:" << endl;
                    cin >> lt;

                    cout << "Enter number of miles traveled:" << endl;
                    ;
                    cin >> ml;

                    cout << fixed << setprecision(2);
                    cout << "miles per gallon:" << setw(1) << "" << mGALLON(ml, lt) << endl << endl;

                    MPG = ml / (lt * LITER);
                    cout << "Car 2" << endl;
                    cout << "Enter number of liters of gasoline:" << endl;
                    cin >> lt;

                    cout << "Enter number of miles traveled:" << endl;
                    ;
                    cin >> ml;

                    cout << fixed << setprecision(2);
                    cout << "miles per gallon:" << setw(1) << "" << mGALLON(ml, lt) << endl << endl;

                    MPG2 = ml / (lt * LITER);


                    if (MPG > MPG2) {
                        cout << "Car 1 is more fuel efficient" << endl << endl;
                    } else {
                        cout << "Car 2 is more fuel efficient" << endl << endl;
                    }

                    cout << "Again:" << endl;
                    cin >> repeat;

                    if (repeat == 'Y' || repeat == 'y') {
                        cout << endl;
                    }
                } while (repeat == 'Y' || repeat == 'y');
                break;
            }
            case 7:
            {
                float cost_lastyear, cost_thisyear;
                char c;

                c = 'y';



                //Declare Variables
                while (c == 'y') {

                    cout << "Enter current price:" << endl;
                    cin >> cost_thisyear;


                    cout << "Enter year-ago price:" << endl;
                    cin >> cost_lastyear;

                    float inflation = calcInflation(cost_thisyear, cost_lastyear);

                    cout << "Inflation rate: " << fixed << setprecision(2) << inflation << "%" << endl << endl;

                    cout << "Again:" << endl;
                    cin >> c;
                    if (c == 'y')
                        cout << endl;
                }
                break;
            }
            case 8:
            {
                float cost_lastyear, cost_thisyear;
                float oneyear, twoyear;
                char repeat;

                //Declare Variables
                repeat = 'y';
                //Initialize or input i.e. set variable values

                //Map inputs -> outputs
                while (repeat == 'y') {

                    cout << "Enter current price:" << endl;
                    cin >> cost_thisyear;


                    cout << "Enter year-ago price:" << endl;
                    cin >> cost_lastyear;

                    float inflation = calcInflation(cost_thisyear, cost_lastyear);
                    cout << "Inflation rate: " << fixed << setprecision(2) << inflation << "%" << endl << endl;

                    float rate = inflation / 100;
                    oneyear = cost_thisyear + (cost_thisyear * rate);
                    twoyear = oneyear + (oneyear * rate);

                    cout << "Price in one year: $" << oneyear << endl;
                    cout << "Price in two year: $" << twoyear << endl << endl;



                    cout << "Again:" << endl;
                    cin >> repeat;

                    if (repeat == 'y')
                        cout << endl;
                }
                break;
            }
            case 9:
            {
                double a, b, c;

                //Initialize or input i.e. set variable values

                //Map inputs -> outputs
                cout << "Enter first number:" << endl;
                cin >> a;
                cout << endl;

                cout << "Enter Second number:" << endl;
                cin >> b;
                cout << endl;

                cout << "Enter third number:" << endl;
                cin >> c;
                cout << endl;

                //Display the outputs
                cout << fixed << setprecision(1);
                cout << "Largest number from two parameter function:" << endl;
                cout << "" << max(a, b) << endl;
                cout << endl;
                cout << "Largest number from three parameter function:" << endl;
                cout << "" << max(a, b, c) << endl;
                break;
            }
            default:cout << "Exiting the Menu" << endl;
        }
    } while (choose >= 0 && choose <= 9);

    return 0;
}

float calc(int L, int MD, const float liter) {

    float totalGals;

    totalGals = liter * L;

    return (MD / totalGals);
}

float mGALLON(int m, int l) {
    float gallons;
    gallons = LITER * l;
    return (m / gallons);
}

float calcInflation(float current_cost, float previous_cost) {
    float rate = ((current_cost - previous_cost) / previous_cost)*100;
    return rate;
}

