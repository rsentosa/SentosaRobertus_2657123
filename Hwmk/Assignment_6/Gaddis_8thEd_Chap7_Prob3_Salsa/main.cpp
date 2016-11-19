/* 
   File:   main.cpp
   Author: Robertus Sentosa
   Created on September 29th, 2016, 12:00 PM
   Purpose:  
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int getTotal(int [], int);
int posOfSmallest(int [], int);
int posOfLargest(int [], int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    const int Salsa = 5;   
    int sales[Salsa];
    string name[Salsa] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int totalJarsSold,hiSalesProduct,loSalesProduct;
    // Input values
    for (int type = 0; type < Salsa; type++){
        cout<<"Enter number of "<<name[type]<<" sold: "<<endl;
        cin  >> sales[type];
        while (sales[type] < 0){
        cout << "Error!";
        cin  >> sales[type];
        }
    }
    //Process Values
    totalJarsSold = getTotal(sales, Salsa);
    loSalesProduct = posOfSmallest(sales, Salsa);
    hiSalesProduct = posOfLargest(sales, Salsa);
    // Display values
    cout <<" "<< endl;
    cout << name[0] <<": "<< sales[0] << "\n";
    cout << name[1] << ": " << sales[1] << "\n";
    cout << name[2] << ": " <<sales[2] << "\n";
    cout << name[3] << ": " << sales[3] << "\n";
    cout << name[4] << ": " << sales[4] << "\n";  
    cout << "Total Sales: " << totalJarsSold << endl;
    cout << "High Seller: "  << name[hiSalesProduct] << endl;
    cout << "Low Seller : " << name[loSalesProduct] << endl;
    return 0;
}

int getTotal (int array[], int numElts){
	int total = 0;
	for (int type = 0; type < numElts; type++)
		total += array[type];
	return total;
}

int posOfLargest(int array[], int numElts){
	int indexOfLargest = 0;
	for (int pos = 1; pos < numElts; pos++){
		if (array[pos] > array[indexOfLargest])
			indexOfLargest = pos;
	}
	return indexOfLargest;
}

int posOfSmallest(int array[], int numElts){
	int indexOfSmallest = 0;
	for (int pos = 1; pos < numElts; pos++){
		if (array[pos] < array[indexOfSmallest])
			indexOfSmallest = pos;
	}		
	return indexOfSmallest;
}