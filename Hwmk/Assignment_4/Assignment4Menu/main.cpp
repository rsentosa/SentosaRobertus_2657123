/* 
   File:   main
   Author: Robertus Sentosa
   Created on October 17th, 9:30 PM
   Purpose:  Menu without Functions
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
float GRAVITY=6.673e-8f;  //Universal Gravity Constant cm^3/g/sec^2
float LITRGAL=2.64179e-1f; //Conversion from liter to gallon
//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Problem InflationRate"<<endl;
        cout<<"2.  Type 2  for Problem InflationRatePlus"<<endl;
        cout<<"3.  Type 3  for Problem CreditInterest"<<endl;
        cout<<"4.  Type 4  for Problem Gravity"<<endl;
        cout<<"5.  Type 5  for Problem ClothingSize"<<endl;
        cout<<"6.  Type 6  for Problem ClothingSizePlus"<<endl;
        cout<<"7.  Type 7  for Problem 99Bottles"<<endl;
        cout<<"8.  Type 8  for Problem Gasoline"<<endl;
        cout<<"9.  Type 9  for Problem BetterGasMileage"<<endl;
        cout<<"10. Type 10 for Problem GasForMany"<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:{
                cout<<"Inside Problem Inflation Rate"<<endl;
    //Declaration of Variables
    char answer;                         //answer for looping
    float prictod, pricago, rateinf;     //Price today, Price 1 year ago, Inflation rate
    
    //Looping
    do{
    
    //Input values
    cout<<"This program will calculate the inflation rate using the cost of a large drink."<<endl;
    cout<<"Enter the price of a large drink today:"<<endl;
    cin>>prictod;
    cout<<"Enter the price of a large drink a year ago:"<<endl;
    cin>>pricago;
    
    //Input/Process values 
    if(prictod<=0||pricago<=0){
        cout<<"Enter a positive number."<<endl;
        return 1;//Return failure
        }
    else
    
    //Process values -> Map inputs to Outputs
    rateinf=(prictod-pricago)/pricago*100;
    
    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);  
    
    //Display Output
    cout<<"The inflation rate is : "<<rateinf<<"%"<<endl;
    
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>answer;
    }while((answer=='y')||(answer=='Y'));
                break;
            }
            case 2:{
                cout<<"Inside Problem InflationRatePlus"<<endl;
    //input
    char answer;                                 //answer for looping
    float prictod, pricago, rateinf, incrani;    //Price today, Price 1 year ago, Inflation rate, Annual increase
    
    //Looping
    do{
    
    //Input values
    cout<<"Enter the price of a large drink today:"<<endl;
    cin>>prictod;
    cout<<"Enter the price of a large drink a year ago:"<<endl;
    cin>>pricago;
    
    //Input Validation
    if(prictod<=0||pricago<=0){
        cout<<"Enter a positive number."<<endl;
        return 1;//Return failure
        }
    else
    
    //Process values -> Display Output
    rateinf=(prictod-pricago)/pricago*100;
    incrani=rateinf*prictod/100;
    
    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);    
    
    cout<<"Inflation rate: "<<rateinf<<"%"<<endl;
    cout<<"In a year the cost of a large drink will be:  $"<<incrani+prictod<<endl;
    cout<<"In 2 years the cost of a large drink will be: $"<<incrani*2+prictod<<endl;
    
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>answer;
    }while((answer=='y')||(answer=='Y'));
                break;
            }
            case 3:{
                cout<<"Inside Problem CreditInterest"<<endl;
    //Declaration of Variables
    float monrate, balance;    //monthly interest rate, initial balance
    char answer;               //answer for looping
    int months;                //number of months compounded

    
    //Looping
    do{
   
    //Input values 
    cout<<"This program will take your initial credit balance and compound monthly interest."<<endl;
    cout<<"Initial balance?"<<endl;
    cin>>balance; 
    cout<<"How many months?"<<endl;
    cin>>months;
    cout<<"Monthly rate?"<<endl;
    cin>>monrate;
    
    //Process values -> Map inputs to Outputs
    monrate=monrate/100;                 //converts percent to decimal
    do {
        balance=balance*monrate+balance; //compounds the balance
        months--;
    } while (months!=0);                 //while months hit 0 stop the loop
    
    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);  
           
    //Output
    cout<<"The new due balance after compound interest is: $"<<balance<<endl;   
                
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>answer;
    }while((answer=='y')||(answer=='Y'));
                break;
            }
            case 4:{
                cout<<"Inside Problem Gravity"<<endl;
                
    //Declaration of Variables
    char answer;              //Answer for looping
    float distanc;            //Distance apart
    float force;              //The force between the two objects
    float mass1;              //First Mass
    float mass2;              //Second Mass
 
    
    //Looping
    do{
    
    //Conversion of inputs
    cout<<"Enter the weight of the first object (in dynes):"<<endl;
    cin>>mass1;
    cout<<"Enter the weight of the second object(in dynes):"<<endl;     
    cin>>mass2;
    cout<<"Enter the distance between the two objects (in centimeters):"<<endl;
    cin>>distanc; 
        
    //Process values -> Map inputs to Outputs
    force=GRAVITY*mass1*mass2/(distanc*distanc);
    
    //Display Output
    cout<<"The gravitational force between the two object is : "<<force<<" dynes"<<endl;
    
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>answer;
    }while((answer=='y')||(answer=='Y'));
    
                break;
            }
            case 5:{
                cout<<"Inside Problem ClothingSize"<<endl;
   //Declaration of Variables
    char answer;                         //Answer for looping
    float height, hat, jacket, waist;    //height in inches, hat size, jacket chest size, waist size
    int age, weight;                     //age in years, weight in pounds 
 
    
    //Looping
    do{
    
    //Input values
    cout<<"This program will help find your clothing sizes."<<endl;
    cout<<"Enter your height in inches:"<<endl;
    cin>>height;
    cout<<"Enter your weight in pounds:"<<endl;
    cin>>weight;
    cout<<"Enter your age in years:"<<endl;
    cin>>age;
    
    //Process values -> Map inputs to Outputs
    hat=weight/height*2.9;      
    if(age>=40){
        jacket=height*weight/288+((age/10-3)*0.125);
        waist=weight/5.7+(((age-28)/2)*0.1);
        }       
    else if (age>=30){
        jacket=height*weight/288;
        waist=weight/5.7+(((age-28)/2)*0.1);
        }
    else{
        jacket=height*weight/288;
        waist=weight/5.7;
        }
    
    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);  

    //Display
    cout<<"Your hat size is:          "<<hat<<" inches"<<endl;
    cout<<"Your jacket size (chest): "<<jacket<<" inches"<<endl;
    cout<<"Your waist size:          "<<waist<<" inches"<<endl;
          
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>answer;
    }while((answer=='y')||(answer=='Y'));
                break;
            }
            case 6:{
                cout<<"Inside Problem ClothingSizePlus"<<endl;
   //Declaration of Variables
    char answer;                                           //Answer for looping
    float height, hat, jacket, waist, ftrjack, ftrwai;   //height, hat size, jacket chest size, waist size, future jacket size, future waist size
    int age, weight;                                     //age in years, weight in pounds 
   
    
    //Looping
    do{
    
    //Input values
    cout<<"This program will help find your clothing sizes."<<endl;
    cout<<"Enter your height in inches:"<<endl;
    cin>>height;
    cout<<"Enter your weight in pounds:"<<endl;
    cin>>weight;
    cout<<"Enter your age in years:"<<endl;
    cin>>age;
    
    //Process values -> Map inputs to Outputs
    hat=weight/height*2.9;      
    if(age>=40){
        jacket=height*weight/288+((age/10-3)*0.125);
        waist=weight/5.7+(((age-28)/2)*0.1);
        }       
    else if (age>=30){
        jacket=height*weight/288;
        waist=weight/5.7+(((age-28)/2)*0.1);
        }
    else{
        jacket=height*weight/288;
        waist=weight/5.7;
        }
    ftrjack=jacket+0.125;
    ftrwai=waist+0.5;

    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);  

    //Display
    cout<<"Your current sizes"<<endl;
    cout<<"     hat size:             "<<hat<<" inches"<<endl;
    cout<<"     jacket size (chest): "<<jacket<<" inches"<<endl;
    cout<<"     waist size:          "<<waist<<" inches"<<endl;
    cout<<endl;
    cout<<"Your sizes after 10 years"<<endl;
    cout<<"     hat size:             "<<hat<<" inches"<<endl;
    cout<<"     jacket size (chest): "<<ftrjack<<" inches"<<endl;
    cout<<"     waist size:          "<<ftrwai<<" inches"<<endl;
    
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>answer;
    }while((answer=='y')||(answer=='Y'));
        
                break;
            }
            case 7:{
                cout<<"Inside Problem 99Bottles"<<endl;
     //input
    char answer;     //Answer for looping
    int bottlec;     //bottle count
    
    //Looping
    do{
   
    //Input values
    cout<<"Enter how many bottles of beer are on the wall:"<<endl;
    cin>>bottlec;
    
        //Input validation
    if(bottlec<=0||bottlec>99){
        cout<<"Pick a number between 1-99."<<endl;
        return 1;//Return failure
        }
    else
    
    //Process values -> Display Output
    do{ cout<<bottlec<<" bottles of beer on the wall, "<<endl;
        cout<<bottlec<<" bottles of beer."<<endl;
        cout<<"Take one down and pass it around, "<<endl;
        bottlec--; 
        cout<<bottlec<<" bottles of beer on the wall."<<endl;
        cout<<endl;
      }
    while(bottlec>0);  //Stop when no bottles remain
    
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>answer;
    }while((answer=='y')||(answer=='Y'));

                break;
            }
            case 8:{
                cout<<"Inside Problem Gasoline"<<endl;
     //input         
    float galgas, mpg;     //gallons of gas, miles per hour
    int miles,litrgas;     //Miles traveled, liters of gas
    char answer;           //answer for looping
    
    
    
    //Looping
    do{

    //Input or initialize values Here
    cout<<"This program will calculate your car's Miles Per Gallon (MPG)."<<endl;
    cout<<"Please enter the liters of gas used:"<<endl;
    cin>>litrgas;
    cout<<"Please enter the miles traveled:"<<endl;
    cin>>miles;

    //Input validation
    if(litrgas<0||miles<0){
        cout<<"Error! Cannot calculate negative numbers!"<<endl;
        return 1;//Return failure
        }
    else

    //Process/Calculations Here
        galgas=litrgas*LITRGAL;
        mpg=miles/galgas;
        
         

    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    //Output Located Here
    cout<<"The car has traveled "<<mpg<<" miles per gallon of gas."<<endl;
        
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>answer;
    }while((answer=='y')||(answer=='Y'));
                break;
            }
            case 9:{
                cout<<"Inside Problem BetterGasMileage"<<endl;
    //Declare all Variables Here
    float galgas, mpg, caruno, cardos; //gallons of gas, miles per hour, first car, second car
    char answer;                       //answer for looping
    int miles, litrgas;                 //Miles traveled, liters of gas
  
             
    //Looping
    do{
    
    //Input/Process values 
    cout<<"This program will compare the two car's MPG to find the superior one."<<endl; 
    cout<<"Enter the liters of gas used followed by the miles traveled for car 1:"<<endl;
    cin>>litrgas>>miles;
    galgas=litrgas*LITRGAL;
    mpg=miles/galgas;
    caruno=mpg;
                
    //Input/Process values 
    cout<<"Enter the liters of gas used followed by the miles traveled for car 2:"<<endl;
    cin>>litrgas>>miles;
    galgas=litrgas*LITRGAL;
    mpg=miles/galgas;
    cardos=mpg;
     
    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);   
    
    //Display Output
    if (caruno>cardos){
    cout<<"Car 1 is superior with "<<caruno<<" MPG"<<endl;
    cout<<"Car 2 is inferior with "<<cardos<<" MPG"<<endl;
    }else if (caruno<cardos){
    cout<<"Car 2 is superior with "<<cardos<<" MPG"<<endl;
    cout<<"Car 1 is inferior with "<<caruno<<" MPG"<<endl;
    }else if (caruno=cardos){
    cout<<"Car 1 is the same: "<<cardos<<" MPG"<<endl;
    cout<<"Car 2 is the same: "<<caruno<<" MPG"<<endl;
    }
    
    //Looping
    cout<<"Would you like to run the program again?"<<endl;
    cin>>answer;
    }while((answer=='y')||(answer=='Y'));
                break;
            }
            case 10:{
                cout<<"Inside Problem GasForMany"<<endl;
     float galgas, mpg;                //gallons of gas, miles per hour
    int miles, litrgas, numcar, count; //Miles traveled, liters of gas, number of cars, counter
   
    
    //Input or initialize values Here
    cout<<"This program will calculate multiple car's Miles Per Gallon (MPG)."<<endl;
    cout<<"Please enter the number of cars:"<<endl;
    cin>>numcar;
    
    //Input Validation
    if(numcar<=0){
        cout<<"Please pick a number larger than 0."<<endl;
        return 1;//Return failure
    }
    else    
     
    //Displays only two decimal places
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);    
        
    //Process/Output
    count=1;
    do {
        cout<<"Please enter the liters of gas used followed by the miles traveled for car "<<count<<":"<<endl;
        cin>>litrgas>>miles;
        galgas=litrgas*LITRGAL;
        mpg=miles/galgas;   
        cout<<"This car has traveled "<<mpg<<" miles per gallon of gas."<<endl;
        count++;
        numcar--;
       }
    while (numcar!=0);
                break;
            }//End Case
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}