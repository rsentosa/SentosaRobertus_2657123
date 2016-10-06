/*
   File:   main
   Author: Robertus Sentosa
   Created on October 5th, 2016 7:31 PM
   Purpose:  Time calculator
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
    float   seconds, minutes, hours, days;   //Number of minutes, hours, and days

    //Show decimal point
    cout<<fixed<<showpoint<<setprecision(2);    //Set decimal point to 2 places

    //Input values
    cout<<"Enter a number of seconds and receive the number of seconds being converted to minutes, hours or days."<<endl;
        cin>>seconds;
    if(seconds>=86400) {                                        //If seconds greater than or equal to 86400, display
        days=seconds*1/86400;                                   //Calculate days
        cout<<"The amount of days is = "<<days<<endl;           //Display result
    }else if(seconds>3600&&seconds<86400) {                     //If seconds between 3601 and 86399, display
        hours=seconds*1/3600;                                   //Calculate hours
        cout<<"The amount of hours is = "<<hours<<endl;         //Display result
    }else if(seconds>60&&seconds<3600) {                        //If seconds between 61 and 3599, display
        minutes=seconds*1/60;                                   //Calculate minutes
        cout<<"The amount of minutes is = "<<minutes<<endl;     //Display result
    }else if (seconds>0&&seconds<60) {                          //If seconds between 0 and 59, display
        cout<<"The amount of seconds is = "<<seconds<<endl;     //Display result
    }

    //Input validation
    if(seconds<0) {                         //If user enters a number less than 0 then display
        cout<<"Invalid number"<<endl;      //Display error
        return 1;                         //Return failure
    }

    //Exit Program
    return 0;
}
