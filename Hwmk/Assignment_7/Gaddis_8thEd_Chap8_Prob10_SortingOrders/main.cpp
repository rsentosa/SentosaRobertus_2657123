/* 
   File:   main.cpp
   Author: Robertus Sentosa
   Created on December 1st, 2016, 12:00 PM
   Purpose:  Sorting Orders
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void displayArray(int[], int);
void bubbleSort(int[], int);
void selectionSort(int[], int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    const int SIZE = 8;
    int Array1[SIZE] = {25, 4, 60, 13, 90, 73, 84, 45};
    int Array2[SIZE] = {25, 4, 60, 13, 90, 73, 84, 45};
    //Process values -> Map inputs to Outputs
    
    //Display Output
    cout << "\nContents of the first array.\n";
	displayArray(Array1, SIZE);
	cout << "\nBubble sort the first array in ascending order.\n";
	bubbleSort(Array1, SIZE);
	cout << "\nContents of the second array.\n";
	displayArray(Array2, SIZE);
	cout << "\nSelection sort the second array in ascending order.\n";
	selectionSort(Array2, SIZE);
    //Exit Program
    return 0;
}

void displayArray(int array[], int size){
    for (int i = 0; i < size; i++){
            cout << array[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int array[], int size){
    int temp;
    bool swap;
    do{	swap = false;
        for (int count = 0; count < (size - 1); count++){
                if (array[count] > array[count + 1]){
                    temp = array[count];
                    array[count] = array[count + 1];
                    array[count + 1] = temp;
                    swap = true;
                }
            displayArray(array, size);
        }
    } while (swap);
}

void selectionSort(int array[], int size){
    int startScan, minIndex, minValue;
    for (int startScan = 0; startScan < (size - 1); startScan++){
            minIndex = startScan;
            minValue = array[startScan];
            for (int index = startScan + 1; index < size; index++){
                if (array[index] < minValue){
                    minValue = array[index];
                    minIndex = index;
                }
            }
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
        displayArray(array, size);
    }
}