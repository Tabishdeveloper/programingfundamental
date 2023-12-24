#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){

    // For UPC
int sum=0;

int long a1[12];
int long  mul[12];

int long a2[12]={3,1,3,1,3,1,3,1,3,1,3,1};

// for ISBN-13
int sum_1=0;

int long a_1[13];
int long  mul_1[13];

int long a_2[13]={1,3,1,3,1,3,1,3,1,3,1,3,1};

// for ISBN-10
int sum_2=0;

int long a_22[10];
int long  mul_2[10];

int long a_3[10]={1,2,3,4,5,6,7,8,9,10};

// FOR MASTER CARD

int first,last;

    int sum_11=0;

int long a_11[16];
int long  mul_11[16];

int long a_23[16]={2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1};


char button;

tabish:


cout<<"========================================================================\n";
cout<<"1=> To check validation of Universal Product Code[UPC]\n";
cout<<"2=> To check validation of International Standard Book Number[ISBN]-13\n";
cout<<"3=> To check validation of International Standard Book Number[ISBN]-10\n";
cout<<"4=> To check validation of Master-card / Visa-card\n";
cout<<"========================================================================\n";
cout<<"PLease press one Button : ";
cin>>button;
switch(button){
    case '1':
   

cout<<endl<<"PLease Enter your Universal Product Code[UPC] of 12-digits : ";
for(int i=0;i<12;i++){
    cin>>a1[i];
}
cout<<"This is the Key : ";
for(int i=0;i<12;i++){
    cout<<a2[i]<<" ";
}
for(int i=0;i<12;i++){
    mul[i]=a1[i]*a2[i];
    sum += mul[i];   
}


if(sum % 10 ==0){
    cout<<"\nYour Universal Product Code[UPC] is Authentic\n";
}
else{
    cout<<"\nYour Universal Product Code[UPC] is Not Authentic\n";

}
break;


case '2':

cout<<endl<<"PLease Enter your ISBN-13 : ";
for(int i=0;i<13;i++){
    cin>>a_1[i];
}
cout<<"This is the Key :        ";
for(int i=0;i<13;i++){
    cout<<a_2[i]<<" ";
}
for(int i=0;i<13;i++){
    mul_1[i]=a_1[i]*a_2[i];
    sum_1+= mul_1[i];   
}

if(sum_1 % 10 == 0){
    cout<<"\nYour ISBN-13 is Authentic\n";
}
else{
    cout<<"\nYour ISBN-13 is Not Authentic\n";

}
break;

case '3':

cout<<endl<<"PLease Enter your ISBN-10 : ";
for(int i=0;i<10;i++){
    cin>>a_22[i];
}
cout<<"This is the Key :        ";
for(int i=0;i<10;i++){
    cout<<a_3[i]<<" ";
}
for(int i=0;i<10;i++){
    mul_2[i]=a_22[i]*a_3[i];
    sum_2+= mul_2[i];   
}
if(sum_2 % 11 == 0){
    cout<<"\nYour ISBN-10 is Authentic\n";
}
else{
    cout<<"\nYour ISBN-10 is Not Authentic\n";

}
break;

case '4':


cout<<endl<<"PLease Enter your Master-card / Visa-card Number : ";
for(int i=0;i<16;i++){
    cin>>a_11[i];
}

cout<<"This is the Key :        ";
for(int i=0;i<16;i++){
    cout<<a_23[i]<<" ";
}
for(int i=0;i<16;i++){
    mul_11[i]=a_11[i]*a_23[i];
    if(mul_11[i]>9){
        first = mul_11[i]/10;
        last = mul_11[i]%10;
        sum_11= sum_11 + first + last ;

    }
    else{
        sum_11+= mul_11[i];
       
}
}

if(sum_11 % 10 == 0){
    cout<<"\nYour Master-card / Visa-card Number is Authentic\n";
}
else{
    cout<<"\nYour Master-card / Visa-card Number is Not Authentic\n";

}
break;



default:
cout<<"Opps! Invalid Entery Please try again\n";
goto tabish;

break;


}
    return 0 ;
}