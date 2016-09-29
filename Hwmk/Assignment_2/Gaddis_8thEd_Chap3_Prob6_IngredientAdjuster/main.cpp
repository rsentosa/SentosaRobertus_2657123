/* 
   File:   main
   Author: Robertus Sentosa
   Created on September 27th, 2:26 PM
   Purpose:  Ingredient Adjuster
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Format
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   cookRec=48,         //Cookies made per recipe
            cookSug=1.5,        //Cups of sugar per 48 cookies
            cookFlr=2.75,       //Cups of flour per 48 cookies
            cookBut=1,          //Cups of butter per 48 cookies
            cookWa,             //Number of cookies wanted
            amoNed,             //Amount of ingredient needed
            sugNed,             //Amount of sugar needed for batch
            flrNed,             //Amount of flour needed for batch
            butNed;             //Amount of butter needed for batch
               
    //Input values
    cout<<"How many cookies would you want to make?"<<endl;    //Ask user to input how many cookies they want to make
    cin>>cookWa;                                           //Input
    
    //Process values -> Map inputs to Outputs
    if(cookWa<=48)amoNed=cookRec/cookWa,     //If amount of cookies wanted is less than 48
                   sugNed=cookSug/amoNed,     //Calculate amount of sugar needed
                   flrNed=cookFlr/amoNed,     //Calculate amount of flour needed
                   butNed=cookBut/amoNed;     //Calculate amount of butter needed
    else if(cookWa>48)amoNed=cookWa/cookRec, //If amount of cookies wanted is more than 48
                   sugNed=cookSug*amoNed,     //Calculate amount of sugar needed
                   flrNed=cookFlr*amoNed,     //Calculate amount of flour needed
                   butNed=cookBut*amoNed;     //Calculate amount of butter needed
    
    //Decimal point
    cout<<fixed<<showpoint<<setprecision(2);    //Fixed decimal point to 2 places
                       
    //Display Output 
    cout<<"The amount of sugar needed is "<<sugNed<<" cups."<<endl;     //Show user amount of sugar needed
    cout<<"The amount of butter needed is "<<butNed<<" cups."<<endl;    //Show user amount of butter needed
    cout<<"The amount of flour needed is "<<flrNed<<" cups."<<endl;     //Show user amount of flour needed
    
    //Exit Program
    return 0;
}