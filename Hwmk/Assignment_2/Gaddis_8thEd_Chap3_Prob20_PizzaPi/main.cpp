/* 
   File:   main
   Author: Robertus Sentosa
   Created on September 28th, 2016 5:06 PM
   Purpose:  Pizza Pi
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>      //For Pi function
#include <iomanip>    //Format
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float PI=4*atan(1.0);//PI

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   oSlice=14.125,    //Area of one slice of pizza
            nSlice,           //Number of slices
            pizAr,            //Area of pizza
            radi,             //Radius of pizza
            diam;             //Diameter of pizza
    
    //Input values
    cout<<"What is the diameter of the pizza in inches?"<<endl; //Ask user to input diameter of pizza in inches
    cin>>diam;                                                //input
            
    //Process values -> Map inputs to Outputs
    radi=diam/2;             //Calculate radius
    pizAr=PI*pow(radi,2);    //Calculate area of pizza
    nSlice=pizAr/oSlice;     //Calculate number of slices
            
    //Decimal point
    cout<<fixed<<showpoint<<setprecision(1);    //Fixed decimal point to 1 place
    
    //Display Output
    cout<<"The number of pizza slices is "<<nSlice<<endl;      
    
    //Exit Program
    return 0;
}