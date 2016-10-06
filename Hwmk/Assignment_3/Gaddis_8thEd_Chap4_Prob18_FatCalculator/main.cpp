/*
   File:   main
   Author: Robertus Sentosa
   Created on October 5th, 2016 9:45 PM
   Purpose:  Fat Gram Calculator
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Format
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const unsigned char PERCENT=100;    //Percentage
const unsigned char cpgFat=9;       //One gram of fat has 9 calories

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float           perFat;                           //Percentage of fat
    float           calor, grFat, caFat;    //Amount of calories, grams of fat, calories from fat

    //Show decimal point
    cout<<fixed<<showpoint<<setprecision(2);    //Set decimal point to 2 places

    //Input values
    cout<<"How many calories are in your food?"<<endl;  //Ask user how many calories
        cin>>calor;
    cout<<"How many grams of fat are in your food?"<<endl;  //Ask user how many grams of fat
        cin>>grFat;

    //Process values -> Map inputs to Outputs
        caFat=grFat*cpgFat;                                    //calories from fat calculation
        perFat=caFat/calor*100;                                      //Percentage of fat in food

    //Input Validation
    if(calor<0||grFat<0)                                                          //If calories or grams of fat are less than 0 then display
    {
        cout<<"Error. one of the values entered was not valid, please re-enter."<<endl; //Display error
        return 1;   //Return failure
    }else if(caFat>calor)
    {
        cout<<"Error, calories from fat cannot exceed total calories. please re-enter."<<endl; //Display error
        return 1;   //Return failure
    }

    //Display Output
    cout<<"Amount of calories from fat is = "<<caFat<<endl;   //Display amount of calories from fat
    if(perFat<=30)                                                     //If percentage of fat is less than 30 then display
    {
        cout<<"Percentage of fat is = "<<perFat<<endl;            //Display percentage of fat
        cout<<"Food is low in fat."<<endl;                       //Display
    }else
        cout<<"Percentage of fat is = "<<perFat<<endl;            //Display percentage of fat

    //Exit Program
    return 0;
}
