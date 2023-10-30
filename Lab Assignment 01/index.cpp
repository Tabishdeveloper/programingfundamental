#include<iostream>
#include<string>
using namespace std;
int main(){

    char button;
     cout<<"please put your alphabet\n";
     cin>>button;
     if(button>='a' && button <='z'){
      cout<<"this is lower case\n";
     }
     else{
      cout<<"not a lower case\n";
     }

     //____________________________________________________________________________________________________________________________

     
     char sale;
     int senior = 400;
     int junior = 275;
     cout<<" please enter given charcter (s,j)\n";
     cin>>sale;
     switch(sale){
      case 's':
      case 'S':
      cout<<"salary of senior saleman is = \n"<<senior;
      break;
      case 'j':
      case 'J':
      cout<<"salary of junior saleman is = \n"<< junior;
      break;
      default:
      cout<<"Error\n";
      break;
      
     }

     //____________________________________________________________________________________________________________________________


     int a,b,c;
     cout<<"\nplease enter your number\n";
     cin>>a>>b>>c;
     if(a!=0){
      if(b%a==0 && c%a==0){
      cout<< "yes this is common divisor\n";
     }
     else{
      cout<<"this is not a common divisor\n";
     }}
     else{
      cout<<"please try again\n ";
     }

     //____________________________________________________________________________________________________________________________


     char button2;
     float length,width,height,base;
     cout<<"\nplease select one to show the solution (S,T)\n";
     cin>>button2;
     switch(button2){
      case 'S':
      case 's':
      cout<<"enter the length of square\n";
      cin>>length;
      cout<<"enter the width of square\n";
      cin>>width;
      cout<<"Area of square is "<<length<< "*"<<width<< " = " <<length*width;
      break;
      case 'T':
      case 't':
      cout<<"enter the base of triangle\n";
      cin>>base;
      cout<<"enter the height of triangle\n";
      cin>>height;
      cout<<"Area of triangle is 1/2"<<base << "*" << height <<" = "<<1/2*base*height;
      break;
      default:
      cout<<"your selection is wrong please try again\n";
      break;

     }

     //____________________________________________________________________________________________________________________________


     float units;
     char button3;

     cout<<"\nPress F,C for conversion\n";
     cin>>button3;
    
    switch(button3){
      case 'f':
      case 'F':
      cout<<"please enter your temperature in celcius\n";
      cin>>units;
      cout<<"The given temperature is "<<units<<"*9/5+32 = "<<units *9/5+32 <<"Fahrenheit\n";
      break;
      case 'C':
      case 'c':
      cout<<"please enter your temperature in farhenheit\n";
      cin>>units;
      cout<<"The given temperature is "<<units<<"*5/9-32 = "<<(units-32) *5/9 <<"celcius\n";
      break;
      default:
      cout<<"ERROR! your selected program is not correct\n";
      break;



      
    }

    //____________________________________________________________________________________________________________________________


    char button4;
    cout<<" press one number (1,2,3,4,5)\n";
    cin>>button4;
    switch(button4){
      case '1':
      cout<<"Western Digital\n";
      break;
      case '2':
      cout<<"3M corporaion\n";
      break;
      case '3':
      cout<<"Maxell Corporation\n";
      break;
      case '4':
      cout<<"Sony Corporation\n";
      break;
      case '5':
      cout<<"Verbatim Corporation\n";
      break;
      default:
      cout<<"Selected number is wrong\n";
      break;
    }

    //____________________________________________________________________________________________________________________________

    return 0;
}