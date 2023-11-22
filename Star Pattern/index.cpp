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

/*int i =1;

while(i<=4){
    
    int j = 1;
    while(j<=i){
    
        cout<<" * ";
        j++;;
      
    }
    
    cout<<"\n";
    i++;
    

}
*/
/*
int i =1;
int n;
cout<<"Enter number of rows : ";
cin>>n;

while(i<=n){
    
    int j = n;
    while(j>=i){
    
        cout<<"* ";
        j--;;
      
    }
    
    cout<<"\n";
    i++;
    

}
*/
/*int i =1;

while(i<=4){
    
    int j = i;
    while(j<=4){
    
        cout<<" * ";
        j++;;
      
    }
    
    cout<<"\n";
    i++;
    

}
*/
/*int n;
cout<<"Enter No.of Rows : ";
cin>>n;
int i =1;
while(i<=n){
    int s =2;
    while(s>=n){
        cout<<" ";
        s++;
    }
    int j=1;
    while(j<=i){
        cout<<"* "<<" ";
        j++;
    }
    cout<<endl;
    i++;
}*/
/*
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
}*/
/*
for(int i=n-1;i>=1;i--){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
}*/
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

/*
int i  ,j ,n,t ;
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
}
*/
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
    } 
    
    //________________________________________________________________________________________________________________
    int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
}
for(int i=n-1;i>=1;i--){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
}
    */ 

// Parallelogram print
    /*int i,j;
    
    for (int i = 1; i <= 5; i++)  
    {  
         
        for (int j = 1;j <= (i*2-1); j++)  
            cout << " ";  
  
        
        for (int j = 5; j >=1 ; --j)  
            cout << "* ";  
  
        cout << endl;  
        
    } */

    //_______________________________________________________________________________________________________ 
   /* int i,j;
    
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
    }*/

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



    /*int num,num1;
    int n = 1;
    //while(n<=1){
         cout<<"enter your password\n";
         cin>>num;
         cout<<"your password is saved\n";
         while(n<=3){
         
         cout<<"enter your saved password again\n";
         cin>>num1;
         

         if(num!=num1){
            cout<<"your password is wrong\n";
           // break;
            
            
            
         }
         else{
            cout<<"welcome to dashboard\n";
            break;
         }
         num1--;
    }

*/

    //___________________________________________________________________

    // Continue statement (sari loop run kare gi but jisko condition laga kar stop kiya ho ga only wo digit nhi run kare ga baqi loop as usual run hogi)
    // example => 01
       /*  int x,y;
         
         while(x>0){

            cout<<"enter one number\n";
         cin>>x;
         if(x>0){
            cout<<"your number is =  " << x << "\n";

         }
         else{
            cout<<"your number is = "<< x << "\n";
            break;
         }
            
         }
         */

      /*  int  i= 1;
        int  n,tab;
cout << "Enter number of rows:  ";
cin >> n;
   
    while ( i < n )  
    {  
         int j = 1;
        while (j < (n-1))  
            cout << " "; 
            j++; 
  
        
        while ( j <= i)  
            cout << "* "; 
            j++; 
  
        cout << endl;  
        n--;  
   
   i++; }  
  
    
       
  
   
    while ( i > 0)  
    {  
        int j = 1;
        while ( j < n )  
            cout << " "; 
            j++; 
  
          
        while (j < i)  
            cout << "* "; 
            j++;
  
        cout << endl; 
        n++;  
    i--;}  

*/
// flag always contribute with true or false

/*int x;
bool empty = true;

if(empty){
    cout<<"Enter one number : ";
    cin>>x;
    cout<<x;
    bool empty = false;
   
    
    
}
else{
    cout<<"X has already value\n";

}
*/

for(int i=10 ;i>1;i/=2)
{
    cout<<i<<" ";
}


        
         




    
return 0;
}



