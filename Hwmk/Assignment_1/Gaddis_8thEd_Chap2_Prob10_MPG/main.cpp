/* 
   File:   main
   Author: Robertus Sentosa
   Created on September 21, 2016, 12:55 PM
   Purpose: Miles Per Gallon
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
    int md; //miles driven
    int ga; //gallons of gas used
    int mpg; // miles per gallon
    //Input values
    md = 375;
    ga = 15; 
    //Process values -> Map inputs to Outputs
    mpg = md / ga; 
    //Display Output
    cout << " " << md << " Miles Driven / " << ga << " Gallons of gas used = ";
    cout << mpg << " Miles Per Gallon" << endl;
    //Exit Program
    return 0;
}