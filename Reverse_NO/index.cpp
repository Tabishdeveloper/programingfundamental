#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    int reverse =0;

    cout<<"Please Enter the Number : ";
    cin>>n;
    while(n>0){
        int lastdigit =n%10;
        reverse= reverse*10 + lastdigit;
        n=n/10;
    }
    cout<<"The reverse of given number is : "<<reverse<<"\n";

    return 0;
}