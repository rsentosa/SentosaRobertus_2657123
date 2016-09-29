/*
   File:   main
   Author: Robertus Sentosa
   Created on September 28th, 11:49 AM
   Purpose:  Calculate number of calories
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float           cookBag=30,     //Number of cookies per bag
                    caloSer=300,    //Calories per serving
                    servBag=10,     //Servings per bag
                    servSiz,        //Serving size
                    calcook,         //Calories per cookie
                    cookAte,           //Number of cookies ate
                    caloAte;         //Calories ate

    //Input values
    cout<<"How many cookies have you eaten?"<<endl;    //Ask user to input how many cookies were eaten
    cin>>cookAte;                                      //Input

    //Process values -> Map inputs to Outputs
    servSiz=cookBag/servBag;       //Calculate serving size
    calcook=caloSer/servSiz;       //Calculate calories per cookie
    caloAte=cookAte*calcook;           //Calculate calories ate


    //Display Output
    cout<<"If you ate "<<cookAte<<" cookies,"<<endl;                       //Display number of cookies ate
    cout<<"Then the amount of calories you have consumed is = "<<caloAte<<endl;   //Display amount of calories consumed

    //Exit Program
    return 0;
}
