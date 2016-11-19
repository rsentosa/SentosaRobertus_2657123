/* 
   File:   main.cpp
   Author: Robertus Sentosa
   Created on November 11, 2016, 5:00 PM
   Purpose: Converts Grams/Kilograms to Ounces/Pounds
 */

//System Libraries
#include <iostream>  //Input/output objects
using namespace std; //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
int weiPdOu(int &);           //Enter Weight in Grams/Kilograms
float convWei(int &,float &); //Convert Weight
float outpWei(int &,float &); //Output Weight
        
//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Initialize
    cout<<"This program converts grams/kilograms into ounces/pounds."<<endl;
    
    //Declaration of Variables
    char repeat;         //Repeat the program
    float ounces;
    int grams,pounds;
    
    //Process values
    do{
        grams=weiPdOu(grams);
        ounces=convWei(grams,ounces);
        outpWei(pounds, ounces);
        cout<<"Would you like to run this program again? (Y/N)"<<endl;
        cin>>repeat;
    }while(repeat=='y'||repeat=='Y');

    //Exit Program
    return 0;
}

int weiPdOu(int &ttlGram){
    //Declare Variables
    int grams,kilogrm;
    //Input Values
    do{
        cout<<"Enter the length in kilograms: ";
        cin>>kilogrm;
    }while(kilogrm<0);
    do{    
        cout<<"Enter the remaining grams: ";
        cin>>grams;
    }while(grams>=1000||grams<0);
    ttlGram=(kilogrm*1000)+grams;   //Totals the combined grams
    return ttlGram;
}

float convWei(int &grams,float &ounces){
    //Declare Variables
    float const GRAMOZ=0.035274f;   //grams to ounces
    //Convert Grams into Ounces
    ounces=grams*GRAMOZ;
    return ounces;
}

float outpWei(int &pounds,float &ounces){
    pounds=ounces/16;          //Truncates and gets the pounds
    ounces=ounces-(pounds*16); //Subtracts off pounds and leaves remainder
    cout<<"Pounds: "<<pounds<<endl;
    cout<<"Ounces: "<<ounces<<endl;
}
