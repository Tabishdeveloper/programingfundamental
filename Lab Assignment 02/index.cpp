#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){


  
//______________________________________________________________________________________________________________
int n;
    int a = 1;
    int sum = 0;
    
    cout<<"PLease enter one number\n";
    cin>>n;
    cout<<"your answer is here\n";
    while(a<=n){
      sum = sum + a;
      
       
            cout<<a<<setw(5)<<sum<<"\n";
            ++a; 
    }

    //_______________________________________________________________
    
    float n=4,sum=1;
    do
    {
        sum=sum+1/n;
        n+=4;
    }
    while(n<=100);
    cout<<"The sum of the series is:"<<sum<<"\n"; 





    //_________________________________________________________________________
        char n;
        cout<<"The Alphabets from A to Z is here :\n";
        for(n = 'A';n<='Z';n++){
         cout<< n <<" ";
        }

        //___________________________________________________________________

        int l , s , v ;
              int n = 5;
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

              //____________________________________________________________________________________-

               int num1=0;
               int num2=1;
               int num3 , i ,number;    
 cout<<"Enter the number of elements: ";    
 cin>>number;    
 cout<<num1<<" "<<num2<<" "; 
 for(i=2;i<number;++i)     
 {    
  num3=num1+num2;    
  cout<<num3<<" ";    // 0 or 1 phely hi print ho ja ga is liye idhr unka sum aye ga mtlb ky 0+1=1 aye ga
  num1=num2;    
  num2=num3;    
 }  


 //  __________________________________________________________________________________________

int   sa , va;
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
              
              cout<< "The smallest value is: "<< sa<<"\n"; 

              //__________________________________________________________________________________________
              // => 51

              int  i, j, n;
cout << "Enter number of rows:  ";
cin >> n;
for(i = 0; i <= n; i++)
{
for(j = 0; j <= i; j++)
{
   
cout << j;
}

cout <<j<<" "<< "\n";
} 

//______________________________________________________________________________

// =>52
int d,e,n;
cout<< "please enter number of rows : ";

cin>>n;
for(d = 1; d<=n;d++){
   for(e=1;e<=n;e++){
      if(d%2 !=0)
      cout<<"* ";
      else
         cout<<" *";
      
   }
   cout<<"\n";
}


//____________________________________________________________________________________________


  

    
    
        
    


   
    return 0 ;
}