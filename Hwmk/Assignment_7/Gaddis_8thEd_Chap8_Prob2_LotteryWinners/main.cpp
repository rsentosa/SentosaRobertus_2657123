/* 
   File:   main.cpp
   Author: Robertus Sentosa
   Created on December 02th, 2016, 12:00 PM
   Purpose:  Lottery Winners
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
    const int NUMS = 10;
    int Picks[NUMS] = { 13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121 };
    int WinNums, Search;
    //Input values
    cout << "Enter this week’s winning five-digit number: ";
    cin  >> WinNums;
    //Process values -> Map inputs to Outputs
    Search = searchList(Picks, NUMS, WinNums);
    //Display Output
    if (Search == -1)
        cout << "Sorry, no winning ticket this week";
    else{
        cout << "You have the winning five-digit number: " << Picks[Search] << endl;
    }
    //Exit Program
    return 0;
}

int searchList(int list[], int size, int value){
    int index = 0;
    int position = -1;
    bool found = false;
    while (index < size && !found){
        if (list[index] == value){
            position = index;
            found = true;
        }index++;
    }
    return position;
}