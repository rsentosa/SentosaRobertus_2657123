/*
   File:   main
   Author: Robertus Sentosa
   Created on October 4th, 2016 9:24 PM
   Purpose:  Roman Numeral Converter
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <string>     //Used for string class
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    unsigned short  num;     //User enters a Number 1 through 10
    string  romNum;             //Roman numeral counterpart

    //Input values
    cout<<"Enter any number 1 through 10 and receive the Roman numeral counterpart"<<endl; //Ask user to enter any number 1 through 10
    cin>>num;                                                                            //Input

    //Input Validation
    if(num<1||num>10) {          //enter validation, return error if value input is < than 1 or > than 10
        cout<<"Invalid number"<<endl;  //Display the error
        return 1;                      //Return the failure
    }

    //Process values -> Map inputs to Outputs
    switch(num)  {                   //Use switch to determine case

        case 10:romNum='X';break;       //Case 10
        case 9: romNum="IX";break;      //Case 9
        case 8: romNum="VIII";break;    //Case 8
        case 7: romNum="VII";break;     //Case 7
        case 6: romNum="VI";break;      //Case 6
        case 5: romNum='V';break;       //Case 5
        case 4: romNum="IV";break;      //Case 4
        case 3: romNum="III";break;     //Case 3
        case 2: romNum="II";break;      //Case 2
        case 1: romNum='I';break;       //Case 1
    }
    //Display Output
    cout<<"The Roman numeral counterpart of "<<num<<" is "<<romNum<<endl;    //Display the roman numeral counterpart

    //Exit Program
    return 0;
}
