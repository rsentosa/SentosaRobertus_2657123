/*
   File:   main
   Author: Robertus Sentosa
   Created on October 5th, 2016 6:08 PM
   Purpose:
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Format
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   weight, height, BMI;                            //Weight, Height, and Body mass index

    //Input values
    cout<<"Enter your weight in pounds, height"            //Ask user to input weight and height to receive BMI
        <<" in inches and receive your BMI number."<<endl;
    cin>>weight>>height;                                    //Input

    //Input Validation
    if (weight<0||height<0) {                               //If user enters invalid number then display
        cout<<"Invalid number."<<endl;
    return 1;                                               //Return failure
    }

    //Show decimal point
    cout<<fixed<<showpoint<<setprecision(1);                //Set decimal place to 1

    //Process values -> Map inputs to Outputs
    BMI=weight*703/(height*height);                         //Calculate BMI
    if(BMI<18.5)                                            //If BMI is less than 18.5 then display
        cout<<"your BMI is "<<BMI<<" ,which means you are underweight.";
    else if(BMI>=18.5&&BMI<=25)                             //If BMI is between 18.5 and 25 then display
        cout<<"your BMI is "<<BMI<<" ,which means you are optimal weight.";
    else if(BMI>25)                                         //If BMI is greater than 25 then display
        cout<<"your BMI is "<<BMI<<" ,which means you are overweight."<<endl;

    //Display Output

    //Exit Program
    return 0;
}
