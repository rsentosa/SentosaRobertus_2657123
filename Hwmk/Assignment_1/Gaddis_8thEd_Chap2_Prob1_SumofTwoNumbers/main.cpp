/* 
   File:   main
   Author: Robertus Sentosa
   Created on September 20, 2016, 11:41 AM
   Purpose:  Write a program that stores the integers 50 and 100 in 
 * variables, and stores the sum of these two in a variable named total.
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
    int total;
    int x;
    int y;
    //Input values
    x = 50;
    y = 100; 
    total = 150;
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout << "The sum of " << x << " + " << y << " = " << total <<endl;
    //Exit Program
    return 0;
}