/* 
   File:   main.cpp
   Author: Robertus Sentosa
   Created on November 17th, 2016, 10:00 AM
   Purpose:  
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    const int mkys = 3;  //monkeys
    const int days = 7;  //days
    int food[mkys][days];
    float pounds, least, most, sum = 0;
    //Input values
    cout << "Enter how many pounds of food each monkey ate per day"<<endl;
	for (int row = 0; row < mkys; row++){
            for (int col = 0; col < days; col++){
                do{
                    cout<<"Monkey "<<(row + 1)<<" on day "<<(col + 1)<<" ate: "<<endl;
                    cin  >> pounds;
                    if (pounds < 0){
                        cout << "Error";
                        }
                } while (pounds < 0);
                    food[row][col] = pounds;
                    sum += pounds;
            }
		cout << endl;
    }
    //Process values -> Map inputs to Outputs
    least = most = food[0][0];
	for (int row = 0; row < mkys; row++){
		for (int col = 0; col < days; col++){
			if (food[row][col] < least){ 
                            least = food[row][col];
			}
			if (food[row][col] > most){ 
                            most = food[row][col];
			}
		}
	}
    //Display Output
    cout<<"Average amount of food eaten per day : "<<sum/21.0<<" pounds"<<endl;
    cout<<"Least amount of food eaten: "<<least<<" pounds"<<endl;;
    cout<<"Greatest amount of food eaten: "<<most<<" pounds"<<endl;
    //Exit Program
    return 0;
}