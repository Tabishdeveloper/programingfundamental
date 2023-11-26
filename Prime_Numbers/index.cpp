
#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cout<<"Please Enter the Number : ";
    cin>>n;
    bool flag = 0;
    for (int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<n<<"Not a prime NUmber\n";
            flag=1;
            break;


        }
    }
    if(flag==0){
        cout<<n<<" prime number\n";
    }
    return 0;
}