/* 
   File:   main.cpp
   Author: Robertus Sentosa
   Created on November 09, 2016, 6:55 PM
   Purpose: Convert Inches/Feet into Centimeters/Meters
 */

//System Libraries
#include <iostream>  //Input/output objects
using namespace std; //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int lenInFt(int &);           //Enter Length in Inches and Feet
float convlen(int &,float &); //Convert Length
float outplen(int &,float &); //Output Length
        
//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declaration of Variables
    char repeat;        //Repeat the program
    int inches,meters;
    float centim;      //Centimeters
    
    //Initialization
    cout<<"This program is going to convert inches/feet into centimeters/meters."<<endl;
    
    //Process values
    do{
        inches=lenInFt(inches);
        centim=convlen(inches,centim);
        outplen(meters,centim);
        cout<<"Would you like to run this program again? (Y/N)"<<endl;
        cin>>repeat;
    }while(repeat=='y'||repeat=='Y');

    //Exit Program
    return 0;
}

int lenInFt(int &ttlInch){
    //Declare Variables
    int inches,feet;
    //Input Values
    do{
        cout<<"Enter the length in feet: ";
        cin>>feet;
    }while(feet<0);
    do{
        cout<<"Enter the remaining inches (<12): ";
        cin>>inches;
    }while(inches>=12||inches<0);
    ttlInch=(feet*12)+inches;   //Totals the combined inches
    return ttlInch;
}

float convlen(int &inches,float &centim){
    //Declare Variables
    float const INCTMTR=2.54f;   //Inches to centimeters
    //Convert inches into centimeters
    centim=inches*INCTMTR;
    return centim;
}

float outplen(int &meters,float &centim){
    meters=centim*0.01f;         //Truncates and gets the meters
    centim=centim-(meters*100); //Subtracts off meters and leaves remainder
    cout<<"Meters: "<<meters<<endl;
    cout<<"Centimeters: "<<centim<<endl;
}
