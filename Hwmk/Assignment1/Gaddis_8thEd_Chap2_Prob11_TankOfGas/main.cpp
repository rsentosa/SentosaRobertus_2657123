/* 
   File:   main
   Author: Robertus Sentosa
   Created on September 21, 2016, 1:35 PM
   Purpose: Distance per Tank of Gas
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
    int ng; //number of Gallons 
    int at; //average miles per gallon driven to town
    int ah; //average miles per gallon driven to highway
    int dst; //distance to town
    int dsh; //distance to highway
    //Input values
    ng = 20.0f;
    at = 23.5f;
    ah = 28.9f;
    //Process values -> Map inputs to Outputs
    dst = ng * at;
    dsh = ng * ah; 
    //Display Output
    cout << "The distance the car can travel while driven in town is " << dst << endl;
    cout << "The distance the car can travel while driven on the highway is " << dsh << endl;
    //Exit Program
    return 0;
}