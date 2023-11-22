#include<iostream>
#include<string>
#include<iomanip>
#include<climits>
using namespace std;
int main(){


//_______________________________________________________________________________________________________________________________
// Q=> 01:-
/*
    int x;
    cout<<"Enter the number of students: "<<endl;
    cin>>x;

    int highest= INT_MIN;
    int secondHighest= INT_MIN;

    int y = 0;
    while (y< x)
	 {
        int marks;
        cout << "Enter marks for student " << y + 1 << ": ";
        cin >> marks;

        if (marks > highest) 
		{
            secondHighest = highest;
            highest = marks;
        }
	 else if (marks > secondHighest && marks != highest) 
		{
            secondHighest = marks;
        }

        y++;
    }

    if (secondHighest == INT_MIN)
	 {
        cout << "There's only one student or all have the same marks"<<endl;
    } else {
        cout << "The highest marks are: " << highest <<endl;
        cout << "The second highest marks are: " << secondHighest <<endl;
    }
*/
//______________________________________________________________________________________________________

// Q=>02

/*
int prime;
cout<<"Enter Number : ";
cin>>prime;
int i =2;
while ( i<prime) 

{
    if (prime % i == 0) {
        cout<<prime<<" is not a prime number\n";
        break;
    }
        
     else {
        cout << prime << "  prime number\n";
        break;
    }
    i++;
}
*/
//____________________________________________________________________________________________________________________
// Q=> 03
/*
int num63,num64,num65,num66,num67;
cout<< " Enter 1st number : ";
cin>>num63;
cout<< " Enter 2nd number : ";
cin>>num64;
cout<< " Enter 3rd number : ";
cin>>num65;
cout<< " Enter 4th number : ";
cin>>num66;
cout<< " Enter 5th number : ";
cin>>num67;
if(num63>=num64 && num63>=num65 && num63>=num66 &&num63>=num67){
    cout<<num63<< " is Greater number\n";
}
else if(num64>=num63 && num64>=num65 && num64>=num66 &&num64>=num67){
    cout<<num64<< " is Greater number\n";

}
else if(num65>=num63 && num65>=num64 && num65>=num66 &&num65>=num67){
    cout<<num65<< " is Greater number\n";
}
else if(num66>=num63 && num66>=num64 && num66>=num65 &&num66>=num67){
    cout<<num66<< " is Greater number\n";
}
else{
    cout<<num67<< " is greater number\n";
}  
*/
//____________________________________________________________________________________________________________________________

//_____________________________________________________________________________________________________________________________

// Q=>04
/*
int prime;
cout<<"Enter Number : ";
cin>>prime;
int i=2;
while ( i<prime) {
    int j=2;

while ( j<=i)
{
    if (i % j == 0) 
        break;
     else if (i == j+1)
        cout << i << " ";
        j++;
    }
    i++;
}
*/
//_______________________________________________________________________________________________________________________

// Q=> 05
/*
 int l , s , v ;
              int n ;
              cout<<"Enter the total numbers : \n";
              cin>>n;
              if(n>1){
                
              
              float total;

              cout<< "Please enter a whole number : " ;
             cin>> v;
              l = s = total = v;
              int j=1;

              while ( j <= n-1)
              {
                     cout<< "Please enter a whole number: ";
                    cin>> v;
                    total += v;
                   if (v > l)
                         l = v;
                    if (v < s)
                        s = v;
                        ++j;
                        
              } 
              cout<< "The largest value is: "<< l << endl;
              }
              else{
                cout<<"NO value exist\n";
              }
              */

              

//__________________________________________________________________________________________________________________________________

// Q=> 06
/*
int num1,num2;
cout<<"Enter the number: ";
cin>>num1;
int i =1;
while(i<=num1){
    cout<<"enter your number\n";
    cin>>num2;
    
    i++;

}
if(num2>0){
        cout<<"All given numbers are positive\n";
        
    
    }
    else if(num2<0){
        cout<<"All given numbers are negative\n";
        
    }
    else{
        cout<<"The number you entered is zero\n";
    }

    */

   //__________________________________________________________________________________________________________________

   // Q=> 07

 
/*
	int num,c,fact;
	c=1;
	fact=1;
	cout<<" enter number"<<endl;
	cin>>num;
	while(c<=num)
	{
		fact=fact*c;
		c++;
	}
	cout<<" factorial :"<<fact<<endl;
    */

   //________________________________________________________________________________________________________

   // Q =>08


   
   



              


               

    


    return 0;
}