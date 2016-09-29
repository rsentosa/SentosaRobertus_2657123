/* 
   File:   main
   Author: Robertus Sentosa
   Created on september 27, 2016, 1:31 PM
   Purpose:  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //format
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   testA,       //Test A score
            testB,       //Test B score
            testC,       //Test C score
            testD,       //Test D score
            testE,       //Test E score
            sum,         //Total of test scores
            numTest=5,   //Number of tests
            avg;         //Average test scores
    //Input values
    cout<<"What was the score of test A?"<<endl;    //Ask user test score
    cin>>testA;                                     //Input test score
    cout<<"What was the score of test B?"<<endl;    //Ask user test score
    cin>>testB;                                     //Input test score
    cout<<"What was the score of test C?"<<endl;    //Ask user test score
    cin>>testC;                                     //Input test score
    cout<<"What was the score of test D?"<<endl;    //Ask user test score
    cin>>testD;                                     //Input test score
    cout<<"What was the score of test E?"<<endl;    //Ask user test score
    cin>>testE;
    //Process values -> Map inputs to Outputs
    sum=testA+testB+testC+testD+testE;  //Calculate sum of the test scores
    avg=sum/numTest;                    //Calculate average of the test scores
    //Decimal place
    cout<<fixed<<showpoint<<setprecision(1);    //Showing 1 decimal point
    //Display Output
    cout<<"The sum of the test scores is = "<<sum<<endl;    //Show user sum of test scores
    cout<<"The amount of tests taken is = "<<numTest<<endl; //Show user the number of tests taken
    cout<<"The average test score is = "<<avg<<endl;        //Show user the average test score
    //Exit Program
    return 0;
}