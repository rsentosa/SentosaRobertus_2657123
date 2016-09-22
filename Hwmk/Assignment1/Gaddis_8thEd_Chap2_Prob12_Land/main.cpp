/* 
   File:   main
   Author: Robertus Sentosa
   Created on September 21, 2016, 7:49 PM
   Purpose: Land Calculation
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
    int sf;  // square feet
    int totsf;  //total square feet
    int nmac;   //number of acres 
    //Input values
    sf = 43560.0;
    totsf = 391876; 
    //Process values -> Map inputs to Outputs
    nmac = totsf / sf; 
    //Display Output
    cout << "One acre of land is equivalent to " << sf << " square feet." << endl;
    cout << "" << totsf << " square feet of land is equivalent to " << nmac << " acres." << endl;
    //Exit Program
    return 0;
}