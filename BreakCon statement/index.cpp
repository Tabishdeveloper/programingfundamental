#include<iostream>
#include<string>
using namespace std;
int main(){

    // Continue statement (sari loop run kare gi but jisko condition laga kar stop kiya ho ga only wo digit nhi run kare ga baqi loop as usual run hogi)
    // example => 01
         int x;
         for(x=1;x<=5;x++){
            cout<<"Hello World\n";
            continue;
            cout<<"Knowledge is power";
         }

         //____________________________________________________________________________________________________________________
          // example => 02

         for(int i=1;i<=10;i++){      
            if(i==1){      
                continue;      
            }      
            cout<<i<<"\n";      
        } 

        //____________________________________________________________________________________________________________________
         // example => 03
    



        for(int a=1;a<=4;a++){        
            for(int b=1;b<=4;b++){        
             if(a==2 && b!=2){        
                continue;        
                      //  }        
                cout<<a<<" "<<b<<"\n";                  
                    }        
            }   

    //____________________________________________________________________________________________________________________

    // Break Statment (is condition mn jesi hi condition aye gi stop ki to sari ki sari loop stop ho jay gi)
     // example => 04

     for(int c =1;c<=10;c++){
        if(c==7){
            break;
        }

        cout<<c<<"\n";
     }

     for(int d =1;d<=10;d++){
        
            if(d==8){
                break;
            }
            cout<<d<<"\n";
        }

        
       
     




   
    return 0 ;

}