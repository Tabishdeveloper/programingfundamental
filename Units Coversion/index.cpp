#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){

    // Unit Convesions
    // => Kg to grams

float units;
    cout<<"\nEnter the weight in Kg\n";
    cin>>units;
    int conv = units*1000;
    cout<<"The given weight is "<<conv <<" grams\n";
    
    // => cm to meter
    cout<<"Enter the lenght in cm\n";
    cin>>units;
    float conv_1 = units/100;
    cout<<"The given lenght is "<<conv_1 <<" meter\n";

    // => Celsius to fahrenheit

    cout<<"Enter the Temperature in Celsius\n";
    cin>>units;
    float conv_2 = units *9/5+32;
     cout<<"The given temperature is "<<conv_2 <<" Fahrenheit\n";
    return 0 ;
}