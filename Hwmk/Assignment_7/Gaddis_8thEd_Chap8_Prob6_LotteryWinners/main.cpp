/* 
   File:   main.cpp
   Author: Robertus Sentosa
   Created on December 1st, 2016, 12:00 PM
   Purpose:  Lottery Winners
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void selectionSort(string[], int);
void displayArray(string[], int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    const int SIZE = 20;
    string name[SIZE] = {"Collins, Bill", "Smith, Bart", "Michalski, Joe", "Griffin, Jim",
	"Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
	"Allison, Jeff", "Moreno, Juan", "Wolfe, Bill", "Whitman, Jean",
	"Moretti, Bella", "Wu, Hong", "Patel, Renee", "Harrison, Rose",
	"Smith, Cathy", "Conroy, Pat", "Kelly, Sean", "Holland, Beth"};
    //Process values -> Map inputs to Outputs
    selectionSort(name, SIZE);
    //Display Output
    displayArray(name, SIZE);
    //Exit Program
    return 0;
}

void selectionSort(string array[], int size){
    int startScan, minIndex;
    string minValue;
    for (int startScan = 0; startScan < (size - 1); startScan++){
        minIndex = startScan;
        minValue = array[startScan];
        for (int index = startScan + 1; index < size; index++){
            if(array[index] < minValue){
                    minValue = array[index];
                    minIndex = index;
            }
        }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}

void displayArray(string name[], int size){
    for (int i = 0; i < size; i++){
            cout << name[i] << endl;
    }
}