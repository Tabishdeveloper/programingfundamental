#include<iostream>
#include<string>
using namespace std;
int main(){
      for(int i=1;i<=4;i++){        
            for(int j=1;j<=4;j++){        
            // if(i==2&&j!=2){        
               // continue;        
                      //  }        
                cout<<i<<" "<<j<<"\n";                  
                    }        
            }      



            int  a, b, n;
cout << "Enter number of rows:  ";
cin >> n;
for(a = 1; a <= n; a++)
{
for(b = 1; b <= a; b++)
{
cout << "* ";
}

cout << "\n";
}    

return 0;
}