/* 
   File:   main.cpp
   Author: Robertus Sentosa
   Created on December 1st, 2016, 12:00 PM
   Purpose:  Search Benchmark
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void getValue(int&);
int linearSearch(int[], int, int, int&);
int binarySearch(int[], int, int, int&);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    const int SIZE = 20;
    int Array[SIZE] = { 1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 15, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int LinBMark = 0, BinBMark = 0, value, LinResults, BinResults;
    //Process values -> Map inputs to Outputs
    getValue(value);
    LinResults = linearSearch(Array, SIZE, value, LinBMark);
    BinResults = binarySearch(Array, SIZE, value, BinBMark);
    //Display Output
    cout << "Number of comparisons made before finding the value: "<< value << endl;
    cout << "The linear Search algorithm: " << LinBMark << endl;
    cout << "The binary Search algorithm: " << BinBMark << endl;
    //Exit Program
    return 0;
}

void getValue(int &value){
	cout << "Enter the value to search for: ";
	cin  >> value;
}

int linearSearch(int list[], int size, int value, int &LinBMark){
    int index = 0;			
    int position = -1;		
    bool found = false;     
    while(index < size && !found){
            if (list[index] == value){
                    found = true;			
                    position = index;		
        }
        index++;
        if (position == -1)
    LinBMark++;
    }
return position;				
}

int binarySearch(int array[], int size, int value, int &BinBMark){
int first = 0,							
        last = size - 1,					
        middle,								
        position = -1;						
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
    if (position == -1)
            BinBMark++;
}
return position;
}