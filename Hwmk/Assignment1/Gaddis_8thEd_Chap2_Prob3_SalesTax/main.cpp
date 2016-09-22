/* 
   File:   main
   Author: Robertus Sentosa
   Created on September 21, 2016, 9:01 PM
   Purpose: 
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float pur; // purchase
    float stax; // state sales tax
    float ctax; // county sales tax
    float totax; // total tax
    //Input values
    pur = 95.00;
    stax = 0.04;
    ctax = 0.02; 
    //Process values -> Map inputs to Outputs
    totax = (stax * pur) + (ctax * pur);
    //Display Output
    cout << "The total sales tax on a $" << pur << " purchase is $ " << totax << endl;
    //Exit Program
    return 0;
}