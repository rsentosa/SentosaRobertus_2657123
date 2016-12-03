/* 
   File:   main.cpp
   Author: Robertus Sentosa
   Created on December 1st, 2016, 12:00 PM
   Purpose:  Binary String Search
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int binarySearch(string[], int, string);
void selectionSort(string[], int);
string getValue();
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    const int SIZE = 20;
    string name[SIZE] = {"Collins, Bill", "Smith, Bart", "Michalski, Joe", "Griffin, Jim",
	"Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
	"Allison, Jeff", "Moreno, Juan", "Wolfe, Bill", "Whitman, Jean",
	"Moretti, Bella", "Wu, Hong", "Patel, Renee", "Harrison, Rose",
	"Smith, Cathy", "Conroy, Pat", "Kelly, Sean", "Holland, Beth"};
    string value;
    int result;
    //Process values -> Map inputs to Outputs
    selectionSort(name, SIZE);
    value = getValue();
    result = binarySearch(name, SIZE, value);
    //Display Output
    if (result == -1)
        cout << "Name is not in list";
    else
        cout << name[result] << " was found in subscript #" << result; 
    //Exit Program
    return 0;
}

void selectionSort(string array[], int size){
    int startScan, minIndex;
    string minValue;
    for (int startScan = 0; startScan < (size - 1); startScan++){
            minIndex = startScan;
            minValue = array[startScan];
            for (int index = 0; index < size; index++){
                    minValue = array[index];
                    minIndex = index;
            }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}

string getValue(){
    string input;
    cout << "Enter the name you would like to search for: ";
    getline(cin, input);
    return input;
}

int binarySearch(string array[], int size, string value){
    int first = 0, last = size - 1, middle, position = -1;
    bool found = false;
    while (!found && first <= last){
        middle = (first + last) / 2;
        if (array[middle] == value){
            found = true;
            position = middle;
        }
        else if (array[middle] > value)
                last = middle - 1;
        else
                first = middle + 1;
    }
return position;	
}
