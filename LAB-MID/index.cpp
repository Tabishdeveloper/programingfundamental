#include<iostream>
#include<iomanip>
#include<string>
#include<climits>
#include<math.h>
using namespace std;
int main(){

    //______________________________________________________________________________
    // TASK=>01

    /*int side1,side2,side3,result,sq;
    cout<<"Enter the base of Triangle : ";
    cin>>side1;
    cout<<"Enter the height of Triangle : ";
    cin>>side2;
    cout<<"Enter the hypo.... of Triangle : ";
    cin>>side3;
    sq=side3*side3;
    result=(side1*side1)+(side2*side2);
    if(result==sq){
        cout<<"The given Triangle is Right-angle Trianle\n ";
    }
    else{
        cout<<"The given Trianle is not a Right-angle Triangle\n";
    }
    */

    //_________________________________________________________________________
    //                            TASK=>03:-

 
/*int n, tab = 0, tab1 = 0,k=0;

cout << "Enter the number of rows: ";
cin >> n;

for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= n-i; j++) {
    cout << "  ";
    tab++;
    }

 

for(int k=0; k!= 2*i-1;k++) {
    if (tab <= n-1) {
        cout << i+k << " ";
            tab++;
        }
    else {
        tab1++;
        cout << i+k-2*tab1 << " ";
        }
            
    }
        tab1 = tab = k = 0;

        cout << endl;
    }
    */

//_____________________________________________________________________________
// TASK=>02:-

int amt, R500, R100, R50, R20, R10, R5, R1;

cout<<"Enter amount: ";

cin>>amt;

R500=amt/500;

amt=amt%500;

R100=amt/100;

amt=amt%100;

R50=amt/50;

amt-amt%50;

R20-amt/20;

amt=amt%20;

R10=amt/10;

amt =amt%10;

R5=amt/5;

amt=amt%5;

R1=amt;

cout<<"Rs.500 : "

<<R500<<"\nRs.100: "<<R100<<"\nRs. 50 : "<<R50<<

"\nRs. 20:"

<<R20<<"\nRs. 10: "<<R10<<"\nRs.5 "<<R5<<"\nRe. 1: "<<R1;








    return 0 ;
}