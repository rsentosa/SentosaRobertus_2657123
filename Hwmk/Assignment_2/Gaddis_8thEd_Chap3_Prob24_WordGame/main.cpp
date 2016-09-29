/*
   File:   main
   Author: Robertus Sentosa
   Created on September 27, 2016, 8:41 AM
   Purpose: Word Game
*/
//System Libraries
#include <iostream>   //Input/Output objects
#include <string>     //For string class
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    string  name, //his or her name
            age, //his or her age
            city, //name of city
            college, //name of college
            proff, //type of profession
            animal, //type of animal
            pName; //pet's name
    //Input values
    cout<<"What is your name?"<<endl;       // User inputs their name
    cin>>name;                              //Input
    cout<<"What is your age?"<<endl;        // User inputs their age
    cin>>age;                               //Input
    cout<<"Name a city:"<<endl;              // User input a city name
    cin>>city;                              //Input
    cout<<"Name a college:"<<endl;           // User input a college name
    cin>>college;                           //Input
    cout<<"Name a profession:"<<endl;        // User input a profession
    cin>>proff;                              //Input
    cout<<"Name a type of animal:"<<endl;    // User input a type of animal
    cin>>animal;                            //Input
    cout<<"What is the pet's name?"<<endl;  // User to input pet's name
    cin>>pName;
    //Process values -> Map inputs to Outputs

    //Display Output
    cout<<"There was once a person named "<<name<<" who lived in "<<city<<"."
        <<" At the age of "<<age<<", "<<name<<" went to college at "<<college<<"."
        <<" "<<name<<" graduated and went to work as a "<<proff<<"."
        <<" Then, "<<name<<" adopted a(n) "<<animal<<" named "<<pName<<"."
        <<" They both lived happily ever after!"<<endl;  //Display the word game
    //Exit Program
    return 0;
}
