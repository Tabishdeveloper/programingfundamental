#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){

    int i,n;
cout<<"enter number\n";
cin>>n;
        for( i=1;i<=10;++i){        
            for(int j=1;j<=n;++j){
                 
               cout<<setw(5)<<j<<" x "<<i <<" = "<<i*j<<"\t"; 
            
             
                   
                               
                    }  
                  
                   cout<<"\n";
                  
                          
            }   
    return 0 ;
}