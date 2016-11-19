/* 
   File:   main.cpp
   Author: Robertus Sentosa
   Created on November 10, 2016, 8:30 PM
   Purpose: Convert Centimeters/Meters into Inches/Feet
 */

//System Libraries
#include <iostream>  //Input/output objects
using namespace std; //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int lenInFt(int &);           //Enter Length in Meters and Centimeters
float convlen(int &,float &); //Convert Length
float outplen(int &,float &); //Output Length
        
//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declaration of Variables
    char repeat;        //Repeat the program
    float inches,meters;
    int feet,centim;   //Feet, Centimeters
    
    //Initialize
    cout<<"This program is going to convert inches/feet into centimeters/meters."<<endl;
    
    //Process values
    do{
        centim=lenInFt(centim);
        inches=convlen(centim,inches);
        outplen(feet,inches);
        cout<<"Would you like to run this program again? (Y/N)"<<endl;
        cin>>repeat;
    }while(repeat=='y'||repeat=='Y');

    //Exit Program
    return 0;
}

int lenInFt(int &ttlCent){
    //Declare Variables
    int meters,centim;
    //Input Values
    do{
        cout<<"Enter the length in meters: ";
        cin>>meters;
    }while(meters<0);    
    do{   
        cout<<"Enter the remaining centimeters (<100): ";
        cin>>centim;
    }while(centim>=100||centim<0);    
    ttlCent=(meters*100)+centim;    //Totals the combined centimeters
    return ttlCent;
}

float convlen(int &centim,float &inches){
    //Declare Variables
    float const CTMTRIN=0.3937f;   //Centimeters to Inches
    //Convert centimeters into inches
    inches=centim*CTMTRIN;
    return inches;
}

float outplen(int &feet,float &inches){
    feet=inches/12;           //Truncates and gets the feet
    inches=inches-(feet*12);  //Subtracts off feet and leaves remainder
    cout<<"Feet: "<<feet<<endl;
    cout<<"Inches: "<<inches<<endl;
}