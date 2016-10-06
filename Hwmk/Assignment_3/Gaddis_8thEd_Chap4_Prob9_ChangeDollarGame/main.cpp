/*
   File:   main
   Author: Robertus Sentosa
   Created on October 5th, 2016 7:12 PM
   Purpose:  Change for a Dollar Game
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float dollar=1.00,        //Dollar value
            quarter=.25,        //Quarter value
            penny=.01,          //Penny value
            nickel=.05,         //Nickel value
            dime=.10;           //Dime value
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   quarts, penn, nick, dim;     //Number of quarters, pennies, nickels, and dimes
    float   sum;                            //Sum of change

    //Input values
    cout<<"Enter the number of pennies, nickels, dimes, and quarters that add up to exactly one dollar to win the Dollar Game!"<<endl;     //Ask user to input number of change
    cin>>penn>>nick>>dim>>quarts;                                                        //Input

    //Process values -> Map inputs to Outputs
    sum=(quarts*quarter)+(penn*penny)+(nick*nickel)+(dim*dime);                          //Calculate sum of change
    if (sum==dollar) {                                                                      //If sum is equal to dollar then display
        cout<<"Congratulations, you've won the dollar game!"
            <<" You had "<<penn<<" pennies,"<<" "<<nick<<" nickels,"
            <<" "<<dim<<" dimes,"<<" and "<<quarts<<" quarters,"
            <<" which all added up to exactly 1.00 dollar!"<<endl;
    }else if(sum>dollar) {                                                                  //If sum is > than a dollar then display
            cout<<"Sorry! The amount entered was over a dollar. Please try again."<<endl;
    }else if(sum<dollar) {                                                                  //If sum is < than a dollar then display
            cout<<"Sorry! The amount entered was under a dollar. Please try again."<<endl;
    }

    //Display Output

    //Exit Program
    return 0;
}
