/* 
 * File:   main.cpp
 * Author: Robertus Sentosa
 * Created on September 21, 2016, 9:47 AM
 * Purpose:  Write a program that displays the following pieces of 
 * information, each on a separate line: Name, Address, with City,
 * State, and ZIP code, telephone number, college major. 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    string ne; //name
    string as; //address, city, state, zip code
    string pe; // telephone number
    string mr;  // college major
    //Input or initialize values Here
    ne = "Robertus Sentosa";
    as = "1395 Coral Tree Lane, San Bernardino, California, 92408";
    pe = "909-911-511";
    mr = "Business Informatics";
         
    //Process/Calculations Here
            
    //Output Located Here
    cout << "\nName: " << ne << " \nAddress, City, State, ZIP: " << as << " \nTelephone Number: " << pe << " \nCollege Major: " << mr;

    //Exit
    return 0;
}

