#include<iostream>
#include<string>
using namespace std;
int main(){
    
         int num,num1;
         cout<<"enter your password\n";
         cin>>num;
         cout<<"your password is saved\n";
         tabish:
         cout<<"enter your saved password again\n";
         cin>>num1;

         if(num!=num1){
            cout<<"your password is wrong\n";
            goto tabish;
         }
         else{
            cout<<"Welcome to dashboard\n";
         }



         return 0 ;
}