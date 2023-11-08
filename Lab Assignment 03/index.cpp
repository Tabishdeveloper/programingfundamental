#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){

    // Q=> 01
    /*int n;
    int a = 1;
    
    cout<<"PLease enter one number\n";
    cin>>n;
    cout<<"your answer is here\n";
    for(a=1;a<=n;a++){
      cout<<i << "   " << 6-1 <<"\n";
      
      
       
            cout<<a<<setw(5)<<a<<"\n";
             
    }*/

    //_________________________________________________________________________________________________________________

    // Q=> 2

    /*int n;
    int a = 1;
    int sum = 0;
    
    cout<<"PLease enter one number\n";
    cin>>n;
    cout<<"your answer is here\n";
    for(a=1;a<=n;a++){
      sum = sum + a;
      
       
            cout<<a<<setw(5)<<sum<<"\n";
            
    }*/

    //_________________________________________________________________________________________________________________________

    // Q=> 03

    /*float n=4,sum=1;
    for(n=4;n<=100;n++){
        sum=sum+1/n;
        n+=4;
    }
    
    cout<<"The sum of the series is:"<<sum<<"\n"; 
    */

   //_______________________________________________________________________________________________________________

   // Q=> 04

     /*char n;
        cout<<"The Alphabets from A to Z is here :\n";
        for(n = 'A';n<='Z';n++){
         cout<< n <<" ";
        }
        */

 //___________________________________________________________________________________________________________

 // Q=>05
 int l , s , v ;
int n = 3;
 float total;

 cout<< "Please enter a whole number : " ;
cin>> v;
 l = s = total = v;
 for (int j= 1; j <= n-1; ++j)
  {
    cout<< "Please enter a whole number: ";
   cin>> v;
   total += v;
 if (v > l)
 l = v;
 if (v < s)
 s = v;
  }
   cout<< "The largest value is: "<< l << endl;
  cout<< "The smallest value is: "<< s<<endl;
 cout<< "The average is: "<< total/n << endl;


 //____________________________________________________________________________________________________________
  // Q=> 06

 /* int   sa , va;
 int n = 20;
              

 cout<< "Please enter a whole number : " ;
 cin>> va;
sa  = va;

 for (int j= 1; j <= n-1; ++j)
 {
 cout<<j<< " => Please enter a whole number: ";
   cin>> va;
                   
                   
if (va < sa)
 sa = va;
 }
              
 cout<< "The smallest value is: "<< sa<<"\n"; */
 
 //_______________________________________________________________________________________________________________________________

 // Q=> 08

 /*int num1=0;
int num2=1;
int num3 , i ,number;    
 cout<<"Enter the number of elements: ";    
 cin>>number;    
 cout<<num1<<" "<<num2<<" "; 
 for(i=2;i<number;++i)     
 {    
  num3=num1+num2;    
  cout<<num3<<" ";    
  num1=num2;    
  num2=num3;    
 }*/

 // ______________________________________________________________________________________________________________________

 // Q => 09
 
 int n,n1,n2;

    







    return 0 ;
}