/* 
   File:   main.cpp
   Author: Robertus Sentosa
   Created on November 11, 2016, 10:00 AM
   Purpose: Converts Ounces/Pounds into Grams/Kilograms
 */

//System Libraries
#include <iostream>  //Input/output objects
using namespace std; //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int weiPdOu(int &);           //Enter Weight in Pounds and Ounces
float convWei(int &,float &); //Convert Weight
float outpWei(int &,float &); //Output Weight
        
//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Initialize
    cout<<"This program is going to convert ounces/pounds into grams/kilograms."<<endl;
    
    //Declaration of Variables
    char repeat;         //Repeat the program
    int ounces,kilogm;   //Ounces, Kilograms
    float grams;
    
    //Process values
    do{
        ounces=weiPdOu(ounces);
        grams=convWei(ounces,grams);
        outpWei(kilogm, grams);
        cout<<"Would you like to run this program again? (Y/N)"<<endl;
        cin>>repeat;
    }while(repeat=='y'||repeat=='Y');

    //Exit Program
    return 0;
}

int weiPdOu(int &ttlOunc){
    //Declare Variables
    int ounces,pounds;
    //Input Values
    do{
        cout<<"Enter the length in pounds: ";
        cin>>pounds;
    }while(pounds<0);
    do{    
        cout<<"Enter the remaining ounces : ";
        cin>>ounces;
    }while(ounces>=16||ounces<0);
    ttlOunc=(pounds*16)+ounces;   //Totals the combined ounces
    return ttlOunc;
}

float convWei(int &ounces,float &grams){
    //Declare Variables
    float const OZGRAM=28.3495f;   //Ounces to grams
    //Convert Ounces into Grams
    grams=ounces*OZGRAM;
    return grams;
}

float outpWei(int &kilogm,float &grams){
    kilogm=grams*0.001f;       //Truncates and gets the kilograms
    grams=grams-(kilogm*1000); //Subtracts off kilograms and leaves remainder
    cout<<"Kilograms: "<<kilogm<<endl;
    cout<<"Grams: "<<grams<<endl;
}
