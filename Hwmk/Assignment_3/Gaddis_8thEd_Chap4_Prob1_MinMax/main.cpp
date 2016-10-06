/*
   File:   main
   Author: Robertus Sentosa
   Created on October 4th, 2016 7:54 PM
   Purpose:  Minimum/Maximum
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
    float          NumOne,      //Value number one
                   NumTwo;      //Value number two

    //Input values
    cout<<"Input two numbers, and the program will determine which value is greater"<<endl;
    cout<<"Input a number for A"<<endl;  //Ask user to input number of one
    cin>>NumOne;                        //Input
    cout<<"Input a number for B"<<endl;  //Ask user to input number of two
    cin>>NumTwo;                        //Input

    //Process values -> Map inputs to Outputs
    (NumOne<NumTwo)?                                    //Is value number one less than value two?
    cout<<""<<NumOne<<" is less than"<<" "<<NumTwo:     //If value number one is less than value two then display
    cout<<""<<NumOne<<" is greater than"<<" "<<NumTwo;  //If value number one is greater than value two then display


    //Display Output

    //Exit Program
    return 0;
}
