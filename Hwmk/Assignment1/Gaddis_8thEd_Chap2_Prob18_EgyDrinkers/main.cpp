/* 
   File:   main
   Author: Robertus Sentosa
   Created on September 21, 2016, 6:26 PM
   Purpose:  Energy Drink consumption
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const unsigned char PERCENT = 100; //Global conversion

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables and Initialization
    unsigned short  csSur = 16500,  //Number of customers surveyed
                    csEng,        //Energy Drinkers
                    csCir;        //Citrus Energy Drinkers
    unsigned char   pEng = 15,     //Percentage of energy drinkers
                    pCir = 58;     //Percentage of citrus energy drinkers
    
    //Process values -> Map inputs to Outputs
    csEng = csSur * pEng / PERCENT;
    csCir = csEng * pCir / PERCENT;
    
    //Display Output
    cout << "The number of customers surveyed      = "<< csSur << endl;
    cout << "The percentage energy drinkers        =    "<< static_cast < int > (pEng) << endl;
    cout << "The percentage citrus energy drinkers =    "<< static_cast < int > (pCir) << endl;
    cout << "The number of energy drinkers         =  " << csEng << endl;
    cout << "The number of citrus energy drinkers  =  " << csCir << endl;

    //Exit Program
    return 0;
}