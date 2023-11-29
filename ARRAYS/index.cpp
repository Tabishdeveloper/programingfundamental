#include<iostream>
#include<conio.h>
#include<string>
#include<iomanip>
#include<climits>
using namespace std;
int main(){
    /*int array[10];
    int prime=0,num=0,num1;
    for(int i=0;i<10;i++){
        cout<<"Enter an Integer : ";
        cin>>array[i];

    }
    cout<<"____________________________________________________________________\n";
    cout<<"The prime Numbers are :\n "<<endl<<endl;
    
    for(int i=0;i<10;i++){
        if(array[i]>1){
            num=1;
            for(int j=2;j<array[i];j++){
                if(array[i]%j==0){
                    num=0;
                    break;
                }
            }
        }
        if(num==1){
            cout<<array[i]<< " is a Prime Number.\n";
            prime++;
        }
    }
    cout<<"Total Prime Nmbers entered by the user are : "<< prime;

    */
//__________________________________________________________________________________________________________
// Q=> 02

/*int rollNo[5],marks[5],max,n;
cout<<"Enter the RollNO : ";
cin>>rollNo[0];
cout<<"Enter Marks : ";
cin>>marks[0];
max=marks[0];
n=rollNo[0];
for(int i=1;i<5;i++){
    cout<<"Enter the Roll Number : ";
    cin>>rollNo[i];
    cout<<"Enter the Marks : ";
    cin>>marks[i];
    if(marks[i]>marks[i-1]){
        max=marks[i];
        n=rollNo[i];
    }
}
cout<<"The student with highest marks has Roll Number : "<<n<<" and Marks : "<<max;

*/

//__________________________________________________________________________________________________________
// Q=> 03

/*int num[10],sq[10],cu[10],sum[10],total=0;
for(int i=0;i<10;i++){
    num[i]=i;
    sq[i]=i*i;
    cu[i]=i*i*i;
    sum[i]=num[i]+sq[i]+cu[i];
    total= total + sum[i];
}

cout<<"NUmbers\tSquares\tCubes\ttotal\n";
for(int i =0;i<10;i++){
    cout<<num[i]<<"\t"<<sq[i]<<"\t"<<cu[i]<<"\t"<<sum[i]<<endl;
    
}

cout<<"All  Total : "<<total;

*/

//__________________________________________________________________________________________________________
// Q=> 04

/*char name[10][15];
int salary[10],sal[10];

for(int i=0;i<10;i++){
    cout<<"Enter the Name of Employ : ";
    cin>>name[i];
    cout<<"Enter the Monthly Salary of Employ : ";
    cin>>salary[i];
    sal[i]=salary[i]*12;
    if(sal[i]>=250000){
        cout<<"Name : "<<name[i]<<endl;
        cout<<"Salary : "<<salary[i]<<endl;
        cout<<"Annual Salary : "<<sal[i]<<endl;
        cout<<"Tax to be Paid by this Empoly\n";
    }
    else{
        cout<<"Name : "<<name[i]<<endl;
        cout<<"Salary : "<<salary[i]<<endl;
        cout<<"Annual Salary : "<<sal[i]<<endl;
        cout<<"No Tax to be Paid by this Empoly\n";
    }
}


*/

//__________________________________________________________________________________________________________
// Q=> 05 
/*int arr[10];
    int i, j, k, b;
    for(k=0;k<10;k++)
    {
        cout<<"Enter element "<<(k+1)<<endl;
        cin>>arr[k];
    }
    for(i=0;i<10;i++)
    {
        b=0;
        for(j=0;j<10;j++)
        {
            if(i==arr[j])
            {
                b++;
            }
        }
        cout<<i<<" number occurs "<<b<<" times."<<endl;
    } 
    */

   //__________________________________________________________________________________________________________
// Q=> 06


    /*const int numStudents = 10;
    int marks[numStudents];
    char grades[numStudents];

    for (int i = 0; i < numStudents; ++i) {
    cout << "Enter marks for student " << i + 1 << ": ";
    cin >> marks[i];

        
     if (marks[i] >= 80)
            grades[i] = 'A';
  else if (marks[i] >= 60 && marks[i] <= 79)
            grades[i] = 'B';
    else if (marks[i] >= 40 && marks[i] <= 59)
            grades[i] = 'C';
     else
          grades[i] = 'F'; 
    }

    
    int countA = 0, countB = 0, countC = 0, countF = 0;

    for (int i = 0; i < numStudents; ++i) {
        switch (grades[i]) {
     case 'A':
             ++countA;
             break;
     case 'B':
            ++countB;
            break;
     case 'C':
            ++countC;
            break;
    case 'F':
            ++countF;
            break;
        }
    }

    cout << "Number of students in each grade:\n";
    cout << "A: " << countA << "\n";
    cout << "B: " << countB << "\n";
    cout << "C: " << countC << "\n";
    cout << "F: " << countF << "\n";
    */

    //__________________________________________________________________________________________________________
// Q=> 07

/*int a, b, c, d;
    cout<<"Enter the number of customers:";
    cin>>a;
  
    int mangoes[a], oranges[a], bananas[a], bill[a];
    for(b=0;b<a;b++)
    {
    bill[b]=0;      
     cout<<"Customer "<<b+1<<" :"<<endl;
     cout<<"Enter the number of Mangoes:";
     cin>>mangoes[b];
    bill[b]+=mangoes[b]*20;
    cout<<"Enter the number of Oranges:";
    cin>>oranges[b];
    bill[b]+=oranges[b]*10;
    cout<<"Enter the number of Bananas:";
    cin>>bananas[b];
    bill[b]+=bananas[b]*5;
    }
    cout<<"\n-------------------------------------------------------------------";
    cout<<"\nCustomer No.\tMangoes\tOranges\tBananas\tTotal Bill";
    cout<<"\n-------------------------------------------------------------------\n";
    for(c=0;c<a;c++)
    cout<<c+1<<"\t\t"<<mangoes[c]<<"\t"<<oranges[c]<<"\t"<<bananas[c]<<"\t"<<bill[c]<<endl;
}

 
*/
    
    return 0 ;
}