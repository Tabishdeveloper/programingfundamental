#include<iostream>

#include<math.h>
using namespace std;
int main(){
    int n;
    

    cout<<"PLease Enter the NUmber : ";
    cin>>n;
    int sum = 0;
    int original =n;
    while(n>0){
        int lastdigit = n%10;
        sum += pow(lastdigit,3);
        n=n/10;
    }
    if(sum==original){
        cout<<"  Amstrong Number\n";
    }
    else{
        cout<<" Not Amstrong Number\n";
    }
    return 0;
}