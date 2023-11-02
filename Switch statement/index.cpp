#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){

    char button;
     cout<<"Please select your garde\n A=> 90-100\n B=> 80-89\n C=> 70-79\n";
     cin>>button;
     switch (button){
        case 'a':
        cout<<" student got grade A";
        break;
        case 'b':
        cout<<"student got grade B";
        break;
        case 'c':
        cout<<"Student got grade C";
        break;
        default:
        cout<<"Sorry Apka bacha fail ho chuka ha";
        break;
     }

     //__________________________________________________________________________________________________________________________________________


     //CALULATOR BY USING SWTICH CASE

     char oper;
     float num1,num2;
     cout<<"Please select one operator(+,-,*,/)\n";
     cin>>oper; // jo input lena hai wohi case mn likhna hai wrna program run nhi ho ga
     cout<<"Please enter two numbers\n";
     cin>>num1>>num2;
     switch(oper){
      case '+':
      cout<<num1<<"+"<<num2 <<" = " << num1+num2;
      break;
      case '-':
      cout<<num1<< "-" << num2 <<" = " << num1-num2;
      break;
      case '*':
      cout<<num1<< "*" << num2 << " = " << num1*num2;
      break;
      case '/':
      cout<<num1<< "/" << num2 << " = " << num1/num2;
      break;
      default:
      cout<<"Sorry I can't this operation\n";
      break;
     }

    return 0 ;
}
