/* 
   File:   main.cpp
   Author: Robertus Sentosa
   Created on December 1st, 2016, 12:00 PM
   Purpose:  Charge Account Validation
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int searchList(int[], int, int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    const int ACCTS = 18;
    int List[ACCTS] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850,8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };
    int AcctNum,Result;
    //Input values
    cout << "Enter your charge account number to determine if it is valid: ";
    cin  >> AcctNum;
    //Process values -> Map inputs to Outputs
    Result = searchList(List, ACCTS, AcctNum);
    //Display Output
    if(Result == -1)
        cout << "Account number " << AcctNum << " is invalid";
    else
        cout << "Account number " << List[Result] << " is valid";
    //Exit Program
    return 0;
}

int searchList(int array[], int size, int value){
    int  position = -1, first = 0, last = size - 1, middle;
    bool found = false;
    while (!found && first <= last){
        middle = (first + last) / 2;
        if (array[middle] == value){
            position = middle;
            found = true;
        }
        else if (array[middle] > value)
            last = middle - 1;
        else 							
            first = middle + 1;
    }
    return position;
}