/*
   File:   main
   Author: Robertus Sentosa
   Created on October 5th, 2016 8:34 PM
   Purpose:  Software sales
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Format
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const unsigned char PERCENT=100;    //Percentage

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float           pPack=99,cost,    //Price per package, cost, quantity sold, discount, total cost, discount percentage
                    qSold, disnt,
                    tCost, pDisnt;

    //Input values
    cout<<"How many packages would you like to purchase?"<<endl;        //Ask user how many packages they would like to purchase
    cin>>qSold;                                                       //Input

    //Process values -> Map inputs to Outputs
    cost=pPack*qSold;                                                //Calculate cost

    //Show decimal point
    cout<<fixed<<showpoint<<setprecision(2);                            //Set decimal place to 1

    //Input validation
    if(qSold<0)                       //If user enters quantity less than 0 display
    {
        cout<<"Invalid number"<<endl;   //Display error
        return 1;                       //Return failure
    }

    //Display Output
    if(qSold>=10&&qSold<=19)                                        //If quantity sold is between 10 and 19, display
    {
        pDisnt=20;                                                         //Discount percentage
        disnt=cost*pDisnt/100;                                            //Calculate Discount amount
        tCost=cost-disnt;                                                //Calculate total cost
        cout<<"Cost of "<<""<<qSold<<" packages is = $"<<cost<<endl;  //Display cost before discount
        cout<<"Percentage you qualify for is "<<pDisnt<<"%"<<endl;     //Display discount percentage
        cout<<"Discount amount is = $"<<disnt<<endl;                   //Display discount amount
        cout<<"Total cost after discount was applied is = $"<<tCost<<endl;    //Display total cost after discount
    }else if(qSold>=20&&qSold<=49)                                  //If quantity sold is between 20 and 49, display
    {
        pDisnt=30;                                                         //Discount percentage
        disnt=cost*pDisnt/100;                                            //Calculate Discount amount
        tCost=cost-disnt;                                                //Calculate total cost
        cout<<"Cost of "<<""<<qSold<<" packages is = $"<<cost<<endl;
        cout<<"Percentage you qualify for is "<<pDisnt<<"%"<<endl;
        cout<<"Discount amount is = $"<<disnt<<endl;
        cout<<"Total cost after discount was applied is = $"<<tCost<<endl;
    }else if(qSold>=50&&qSold<=99)                                  //If quantity sold is between 50 and 99, display
    {
        pDisnt=40;                                                     //Discount percentage
        disnt=cost*pDisnt/100;                                        //Calculate Discount amount
        tCost=cost-disnt;                                            //Calculate total cost
        cout<<"Cost of "<<""<<qSold<<" packages is = $"<<cost<<endl;
        cout<<"Percentage you qualify for is "<<pDisnt<<"%"<<endl;
        cout<<"Discount amount is = $"<<disnt<<endl;
        cout<<"Total cost after discount was applied is = $"<<tCost<<endl;
    }else if(qSold>=100)                                              //If quantity sold is over 100, display
    {
        pDisnt=50;                                                     //Discount percentage
        disnt=cost*pDisnt/100;                                        //Calculate Discount amount
        tCost=cost-disnt;                                            //Calculate total cost
        cout<<"Cost of "<<""<<qSold<<" packages is = $"<<cost<<endl;
        cout<<"Percentage you qualify for is "<<pDisnt<<"%"<<endl;
        cout<<"Discount amount is = $"<<disnt<<endl;
        cout<<"Total cost after discount was applied is = $"<<tCost<<endl;
    }else                                                               //If quantity sold is less than 10 then display
        cout<<"I'm sorry, you don't qualify for a discount. Your total cost is = $"<<cost<<endl;

    //Exit Program
    return 0;
}
