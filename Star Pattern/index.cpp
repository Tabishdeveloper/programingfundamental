#include<iostream>
#include<string>
using namespace std;
int main(){

    // Star Pattern

   /*  int  i, j, n;
cout << "Enter number of rows:  ";
cin >> n;
for(i = 1; i <= n; i++)
{
for(j = 1; j <= i; j++)
{
cout << "* ";
}

cout << "\n";
}  */

//___________________________________________________________________________________________________________________________________

//  Reverse Star Pattern 

 /*    int  i, j, n;
cout << "Enter number of rows:  ";
cin >> n;
for(i = 1; i<=n;i++)
{
for(j =i ;j<=n; j++)
{
cout << "* ";
}

cout << "\n";
}*/

//________________________________________________________________________________________





//__________________________________________________________________________________________________


// Including space star pattern


/*int i  ,j ,n,t ;
cout<<"Enter the number of rows";
cin>>n;

 for(i = 1; i <= n; i++)
{

for(t = i; t < (n-1); t++)
{
cout << " ";
}

for(j = 1; j <= i; j++)
{
cout << "*";
}

cout << "\n";
n--;
}*/

//_________________________________________________________________________________


// DIAMOND PATTERN

/*int  i, j, n,tab;
cout << "Enter number of rows:  ";
cin >> n;
   
    for (int i = 0; i < n; i++)  
    {  
         
        for (int j = 0;j < (n-1); j++)  
            cout << " ";  
  
        
        for (int j = 0; j <= i; j++)  
            cout << "* ";  
  
        cout << endl;  
        n--;  
    }  
  
    
       
  
   
    for (int i = n; i > 0; i--)  
    {  
        
        for (int j = 0; j < n; j++)  
            cout << " ";  
  
          
        for (int j = 0;j < i;j++)  
            cout << "* "; 
  
        cout << endl; 
        n++;  
    } */ 

// Parallelogram print
   /* int i,j;
    
    for (int i = 1; i <= 5; i++)  
    {  
         
        for (int j = 1;j <= (i*2-1); j++)  
            cout << " ";  
  
        
        for (int j = 5; j >=1 ; --j)  
            cout << "* ";  
  
        cout << endl;  
        
    } */

    //_______________________________________________________________________________________________________ 
    int i,j;
    
    for (int i = 1; i <= 5; i++)  
    {  
         
        for (int j = 0;j < (5-i); j++)  
            cout << " ";  
  
        
        for (int j =1 ; j <=i ; j++)  
            cout << "* ";  
  
        cout << endl;  
        
    }

    for(int i=1;i<=5;i++){
        for(int j=1;j<i;j++)
        cout<<" ";
        for(int j=1; j<=5-i+1;j++)
        cout<<" *";
        cout<<"\n";
    }

    //__________________________________________________________________________________
    /*for (int i = 1; i > 5; i--)  
    {  
        
        for (int j = 0; j < 5; j++)  
            cout << " ";  
  
          
        for (int j = 0;j < i;j++)  
            cout << "* "; 
  
        cout << endl;
        i++; 
          
    } */

    
return 0;
}



