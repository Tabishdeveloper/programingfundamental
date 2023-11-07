#include<iostream>
#include<string>
#include<iomanip>
using namespace std ;
int main(){

    // => NESTED IF 

    int marks;
cout<<"Please enter your obtained marks\n";
cin>>marks;
if(marks>90){
   cout<<"student got A grade\n";
   if(marks>93){
      cout<<"student fail";
   }
   else{"student dafa ho jao";}
}
else if (marks>80){
   cout<<"student got B grade\n";}

else if(marks>70){
   cout<<"student got C grade\n";}

else if (marks>60){
   cout<<"student got D+ grade\n";}

else if (marks>50){
   cout<<"student got D grade\n";}


else{
   cout<<"student fail ";}



   // IF / ELSE IF

    int marks1;
     cout<<"PLease enter students marks\n";
     cin>>marks1;
     if(marks1>90){
        cout<<"Student got A+ grade\n";
     }
     else if(marks1>80){
        cout<<"Student got B+ grade\n";

     }
     else if(marks1>70){
      cout<<"student got B grade\n";
     }
     else{cout<<"All students fail\n";}

   


    return 0;
}