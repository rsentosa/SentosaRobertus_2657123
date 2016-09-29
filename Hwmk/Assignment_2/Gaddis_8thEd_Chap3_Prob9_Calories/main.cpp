/*
   File:   main
   Author: Robertus Sentosa
   Created on September 28th, 2016 6:46 PM
   Purpose:  How many Pizzas?
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>      //Needed for Pi function
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
            pizArea,            //Area of pizza
            radi,             //Radius of pizza
            diam,             //Diameter of pizza
            sliPer=4,          //slices needed per person
            numPpl,             //Number of people at party
            slices,             //Slices needed
            pizNed;            //Number of pizzas needed

    //Input values
    cout<<"What is the diameter of the pizza to be ordered in inches?"<<endl; //Ask user to input diameter of pizza in inches
    cin>>diam;                                                //input
    cout<<"How many people will be at the party?"<<endl;        //Ask user to input how many people will be at the party
    cin>>numPpl;                                                //Input

    //Process values -> Map inputs to Outputs
    radi=diam/2;            //Calculate radi
    pizArea=PI*pow(radi,2);   //Calculate area of pizza
    nSlice=pizArea/oSlice;  //Calculate number of slices
    slices=sliPer*numPpl;      //Calculate number of slices needed
    pizNed=slices/nSlice;    //Calculate the number of pizzas needed

    //Decimal point
    cout<<fixed<<showpoint<<setprecision(1);    //Fixed decimal point to 1 place

    //Display Output
    cout<<"The number of slices in each pizza is "<<nSlice<<endl; //Display number of slices
    cout<<"The number of pizzas needed is "<<pizNed<<endl;         //Display number of pizzas

    //Exit Program
    return 0;
}
