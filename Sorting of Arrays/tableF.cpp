#include<iostream>
using namespace std;
int table(int num);
int table(int num){
    for(int i=1;i<=10;i++){
        cout<<num<<" X "<<i<<" = "<<num*i<<endl;
    }
}
int main(){
    int n;
    int y;
    tabish:
    cout<<"Enter the Number : ";
    cin>>n;
    table(n);
    cout<<"Press 1 to conti... or Press 0 to stop :";
    cin>>y;
    if(y==1){
    goto tabish ;
    }
    else{
        cout<<"Complete\n";
    }
    return 0;
}