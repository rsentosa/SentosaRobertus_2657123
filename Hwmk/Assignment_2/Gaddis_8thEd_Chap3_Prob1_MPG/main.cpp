/* 
   File:   main
   Author: Robertus Sentosa
   Created on September 27, 2016, 11:21 AM
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
     float galHold,   //Number of gallons car tank can hold
            tank,     //Number of miles that can be driven at a full tank
            mpg;      //Number of miles per gallon
    //Input values
    cout<<"How many gallons can your tank hold?"<<endl;               //Ask user how many gallons can their tank hold
    cin>>galHold;                                                     //Input number of Gallons
    cout<<endl<<"How many miles can you drive on a full tank?"<<endl; //Ask user how many miles can be driven on a full tank
    cin>>tank;                                                        //Input number of miles driven
    
    //Process values -> Map inputs to Outputs
    mpg=tank/galHold;  //Calculate miles per gallon
    //Display Output
    cout<<"Your miles per gallon is "<<mpg<<endl;   //Output miles per gallon
    //Exit Program
    return 0;
}