#include<iostream>
#include<string>
using namespace std ; 
int fact(int n1){
    int mul =1;
        for(int i=2;i<=n1;i++){
        mul = mul*i;
    }
    return mul;

}
int main(){
   
 int num1;
 cout<<"enter  numbers : ";
 cin>>num1;
 cout<< "factorial => " <<fact(num1) << endl;
    return 0 ;
}