/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
* File:   main.cpp
 * Author: Mujahid Ahmad
 * Created on July 12, 2022, 10:41
 * Purpose:  ISP BILL
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string Package;
    int hours;
    int extraHours;
    float extraHourCost = 0;
    float costWithExtras;
    cout << "ISP Bill\n";
    
    cout << "Input Package and Hours\n";
    
    cin >> Package;
    cin >> hours;


    if (Package != "a" && Package != "A" && Package != "B" && Package != "b" && Package != "C" && Package != "c") {
        return 0;
    }
    if (Package == "a" || Package == "A") {
        if (hours > 10) {
            extraHours = (hours - 10);
            extraHourCost = extraHours * 2.00;
            costWithExtras = 9.95 + extraHourCost;
            cout << fixed << setprecision(2) << "Bill = $ " << costWithExtras;
        } else {
            cout << "Bill = $ 11.95";
        }
        }else if (Package == "b" || Package == "B") {
            if (hours > 20) {
            extraHours = (hours - 20);
            extraHourCost = extraHours * 1.00;
            costWithExtras = 14.95 + extraHourCost;
            cout << fixed << setprecision(2) << "Bill = $ " << costWithExtras;
        } else {
            cout << "Bill = $ 14.95";
        }
        }else {
            cout << "Bill = $ 19.95";
        }






        return 0;
    }

