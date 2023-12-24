#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;

// Q=> 01    Decimal to Binary Conversion
void binary_conversion(int decimal){
    int array[100];
    int i = 0;
    int num = decimal ;

    while(decimal != 0){
        array[i] = decimal % 2;  // to find last digit means reminder
        i++;
        decimal = decimal / 2;   // to find original digit kyu ky hum ny again divide krna ha

    }
    // ab array ko ulta print krna hai to for loop use kare gye in decremnet order
    cout<< num << " in Binary is : ";

    for( i = i-1;i>=0;i--){
        cout<< array[i];
    }
    cout<<"\n";
}
//=====================================================================================================
// Q=> 02      Binar to decimal conversion

int decimal_conversion(string binary){
    int zero =0;
    int one = 1;
    // yyad rahy jab binary ot decimal conversion kar rahy hun gye to right side sai nultiply krte hn 
    // or dusri baat ya ky is mn humey binary digit ki lenght ka lazmi pta krna ho ga
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            zero += one;
        }
        one *= 2;  // Move to the next binary position.
    }
    return zero;
}
// =====================================================================================================
// Q => 03   
void input(int size, int number[]){
    for(int i=0;i<size;i++){
        cin>> number[i];
    }
}

 void counter(int size, int number[], int &zero_count,int &even_count ,int &odd_count ){
     zero_count = even_count = odd_count = 0 ;
    
    for (int i = 0; i < size; ++i) {
        if (number[i] == 0) {
            zero_count ++;
        } 
        else if (number[i] % 2 == 0) {
            even_count ++;
        }
         else {
            odd_count ++;
        }
    }
 }
 //===========================================================================================================
 // Q => 04     Triangle of stars
 void triangle(int row_star){
    for(int i=1;i<=row_star;i++){
    for(int j=1;j<=row_star-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
}
 }
 // ======================================================================================================

// Q => 05    Print Fibonaaci-Numbers
 void fib(int num){
    int t1 =0;
    int t2 =1;
    int nextterm;
    for(int i=1;i<=num;i++){
        cout<<t1<<" ";
        nextterm = t1+t2;
        t1=t2;
        t2=nextterm;
    }
    cout<<endl;
    return;
 }
 //==============================================================================================================
  // Q => 06     First Integer is a Multiple of Second Integer or not    
  int multiple(int first_integer,int second_integer){
    if (second_integer != 0 && first_integer % second_integer == 0) {
       cout << first_integer << " is a multiple of " << second_integer << endl;
    } else {
        cout << first_integer << " is not a multiple of " << second_integer << endl;
    }
  }
  //======================================================================================================
  // Q => 07     First Number Raised to the power or Second Number
  void power(int base_number,int power_number){
    
    int result_power =1;
    for(int i=1;i<=power_number;i++){
        result_power = result_power * base_number;
    }
    cout<<base_number<<" is raised to the power of "<<power_number<<" = "<< result_power<<endl;
  }
  // =====================================================================================================
  // Q =>08      Four Integers (a,b,c,d) a3+b3+c3 = d3
  int EQ(int integer_1,int integer_2,int integer_3,int integer_4){
    int result_EQ = (integer_1*integer_1*integer_1)+(integer_2*integer_2*integer_2)+(integer_3*integer_3*integer_3);
    int d_3 = (integer_4*integer_4*integer_4);
    if(result_EQ == d_3){
        cout<<"'0' => given Equation is satisfied"<<endl;
    }
    else{
        cout<<"'1' => given Equation is not satisfied"<<endl;
    }
  }
    //=========================================================================================================
    // Q =>09  Reverse of Number
    
    int reverse(int reverse_number){
        int r_n = 0;
         while(reverse_number>0){
        int lastdigit =reverse_number%10;
        r_n= r_n*10 + lastdigit;
    reverse_number=reverse_number/10;
    }
    cout<<"The reverse of given number is : "<<r_n<<"\n";
    }
    //==========================================================================================================
    // Q => 10    Prime or Not a prime Number
    int isprime(int prime_number){
        bool flag =0;
    for(int i=2;i<=sqrt(prime_number);i++){
        if(prime_number%i==0){
            cout<<prime_number<<"  is not a prime-Number"<<endl;
            flag=1;
            break;

        }
        
    }
    if(flag==0){
            cout<<prime_number<<"  is  a prime-Number"<<endl;
        }
    
}
//========================================================================================================
// Q =>11   Find LCM of two integer
int LCM(int lcm_num1,int lcm_num2){
    int max_num;
     max_num= max(lcm_num1,lcm_num2);
      while (1)    
    {  
          
        if(max_num % lcm_num1 == 0 && max_num % lcm_num2 == 0)  
        {  
            cout << " The LCM of " <<lcm_num1 << " and " << lcm_num2 << " is " << max_num << endl;  
                break;  
        }  
        ++max_num; 
    }  
}

// =======================================================================================================
// Q=> 12   Print Rectangle
void Rectangle(int length, int width) {
    for (int i = 0; i < length; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}
void Draw_horizontal(int length) {
    for (int i = 0; i < length; ++i) {
        cout << "-";
    }
    cout << endl;
}
void Draw_vertical(int height) {
    for (int i = 0; i < height; ++i) {
        std::cout << "|  |" << std::endl;
    }
}
//==================================================================================================
// Q=> 13      Return smallest number among three integers
int smallest(int small_number){
   int  sa  ;
   cout<<"=> Please enter a whole number : " ;
 cin>> small_number;
sa  = small_number;


 for (int j= 1; j <= 4-1; ++j)
 {
 cout<<"=> Please enter a whole number: ";
   cin>> small_number;
                   
                   
if (small_number < sa)
 sa = small_number;
 }
              
 cout<< "The smallest value is: "<< sa<<"\n"; 
}

//==========================================================================================================
// Q =>14     five integer passes through function 
int even_odd(int evenodd[5]){
    for(int i=0;i<5;i++){
        cin>> evenodd[i];
        if(evenodd[i]%2==0){
            cout<<"true => means even integer\n";
        }
        else{
             cout<<"false => means odd integer\n";
        }
    }
}
//=====================================================================================================
// Q => 17    Salary and Tax
int calculateTax(int salary) {
    int tax = 0.0;

    if (salary <= 1000) {
        
        tax = 0.0;
    } else if (salary <= 2000) {
        
        tax = 0.05 * (salary - 1000);
    } else if (salary <= 3000) {
        
        tax = 0.04 * 1000 + 0.05 * 1000;
    } else {
        
        tax = 0.03 * (salary - 2000) + 0.04 * 1000 + 0.05 * 1000;
    }

    return tax;
} 
//==================================================================================================
// Q =>18   Find Greatest common Divisor
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}  
//========================================================================================================
// Q => 22 count digits
int countDigits(int number) {
    int count = 0;

    
    if (number == 0) {
        return 1;
    }

    
    while (number != 0) {
        number /= 10;
        count++;
    }

    return count;
} 
//=========================================================================================================
// Q=> 23  Find maximum Number in given array
int findMax(int array[], int size) {

    int max = array[0];

    for (int i = 1; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}
//==========================================================================================================
// Q => 25  find prime factors of given number
void displayPrimeFactors(int num) {
   
    while (num % 2 == 0) {
        cout << 2 << " ";
        num /= 2;
    }

    
    for (int i = 3; i <= sqrt(num); i += 2) {
        
        while (num % i == 0) {
            cout << i << " ";
            num /= i;
        }
    }

    
    if (num > 2) {
        cout << num;
    }
}
//==================================================================================================================
// Q => 27       print pascal triangle 
int pascal_triangle(int pascal_number){
    int tab = 0,tab1=0,k=0;
    for(int i = 1; i <= pascal_number; i++) {
    for(int j = 1; j <= pascal_number-i; j++) {
    cout << "  ";
    tab++;
    }

 

for(int k=0; k!= 2*i-1;k++) {
    if (tab <= pascal_number-1) {
        cout << i+k << " ";
            tab++;
        }
    else {
        tab1++;
        cout << i+k-2*tab1 << " ";
        }
            
    }
        tab1 = tab = k = 0;

        cout << endl;
    }

}  
//=========================================================================================================
// Q=> 29  Find maximum Number in given array
int findMin(int array[], int size) {

    int min = array[0];

    for (int i = 1; i < size; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    return min;
} 
//=============================================================================================================
// Q => 30   
  
int main(){

    int decimal_number,y_n,row_number,prime_number,lenght,width,small_number,height,lcm_num1,lcm_num2,fib_number,first_integer,second_integer,base_number,power_number,a,b,c,d,reverse_number;
    int size_number,evenodd[5],a1[100],a2[1000],maxNumber,minNumber,salary,tax,gcd,numberOfDigits;
    const int max_size = 100;
    int array_number[max_size],zero_count,even_count,odd_count;
    string binary_number;

    int button;
    repeat:
    cout<< "Please Select your Question Number from 1-37 :  ";
    cin>>button;
    switch(button){
        case 1:
        cout<<"=========================================="<<endl;
        cout<<"Decimal-Number to Binary-Number conversion"<<endl;
        cout<<"=========================================="<<endl<<endl;
        cout<<" Please Enter decimal-Number :  ";
        cin>>decimal_number;
        binary_conversion(decimal_number);
        cout<<"------------------------------------"<<endl;
        cout<<"Press => '1' to continue  "<<endl;
        cout<<"press => '0' to Stop"<<endl;
        cout<<"------------------------------------"<<endl;
        cin>>y_n;
        if(y_n==1){
            goto repeat;
        }
        else{
            cout<<"Sir thank you for checking my Questions"<<endl;
        }
        break;
        case 2:
        cout<<"=========================================="<<endl;
        cout<<"Binary-Number to Dinary-Number conversion"<<endl;
        cout<<"=========================================="<<endl<<endl;
        cout<<" Please Enter Binary-Number :  ";
        cin>>binary_number;
         decimal_conversion(binary_number);
        cout<<"------------------------------------"<<endl;
        cout<<"Press => '1' to continue  "<<endl;
        cout<<"press => '0' to Stop"<<endl;
        cout<<"------------------------------------"<<endl;
        cin>>y_n;
        if(y_n==1){
            goto repeat;
        }
        else{
            cout<<"Sir thank you for checking my Questions"<<endl;
        }
        break;
        case 3:
        cout<<"=========================================="<<endl;
        cout<<"count Zeros,even and odd Numbers"<<endl;
        cout<<"=========================================="<<endl<<endl;
        cout<<" Please Enter size of Numbers :  ";
        cin>>size_number;
     input(size_number,array_number);
        counter(size_number,array_number,zero_count,even_count,odd_count);
    cout << "Number of zeros: " << zero_count << endl;
    cout << "Number of even numbers: " << even_count << endl;
    cout << "Number of odd numbers: " << odd_count << endl;
    
        
        cout<<"------------------------------------"<<endl;
        cout<<"Press => '1' to continue  "<<endl;
        cout<<"press => '0' to Stop"<<endl;
        cout<<"------------------------------------"<<endl;
        cin>>y_n;
        if(y_n==1){
            goto repeat;
        }
        else{
            cout<<"Sir thank you for checking my Questions"<<endl;
        }
        break;
        case 4:
        cout<<"=========================================="<<endl;
        cout<<"Print a triangle of stars"<<endl;
        cout<<"=========================================="<<endl<<endl;
        cout<<" Please Enter number of rows :  ";
        cin>>row_number;
         triangle(row_number);
        cout<<"------------------------------------"<<endl;
        cout<<"Press => '1' to continue  "<<endl;
        cout<<"press => '0' to Stop"<<endl;
        cout<<"------------------------------------"<<endl;
        cin>>y_n;
        if(y_n==1){
            goto repeat;
        }
        else{
            cout<<"Sir thank you for checking my Questions"<<endl;
        }
        break;
        case 5:
        case 19:
        cout<<"=========================================="<<endl;
        cout<<"Display fibonacci Numbers"<<endl;
        cout<<"=========================================="<<endl<<endl;
        cout<<" Please Enter number :  ";
        cin>>fib_number;
        fib(fib_number);
        cout<<"------------------------------------"<<endl;
        cout<<"Press => '1' to continue  "<<endl;
        cout<<"press => '0' to Stop"<<endl;
        cout<<"------------------------------------"<<endl;
        cin>>y_n;
        if(y_n==1){
            goto repeat;
        }
        else{
            cout<<"Sir thank you for checking my Questions"<<endl;
        }
        break;
        case 6:
        cout<<"=========================================="<<endl;
        cout<<"First Integer is a Multiple of Second Integer or not    "<<endl;
        cout<<"=========================================="<<endl<<endl;
        cout<<" Please Enter first-Number :  ";
        cin>>first_integer;
        cout<<" Please Enter second-Number :  ";
        cin>>second_integer;

         multiple(first_integer,second_integer);
        cout<<"------------------------------------"<<endl;
        cout<<"Press => '1' to continue  "<<endl;
        cout<<"press => '0' to Stop"<<endl;
        cout<<"------------------------------------"<<endl;
        cin>>y_n;
        if(y_n==1){
            goto repeat;
        }
        else{
            cout<<"Sir thank you for checking my Questions"<<endl;
        }
        break;

        case 7:
        cout<<"=========================================="<<endl;
        cout<<"First Number Raised to the power or Second Number"<<endl;
        cout<<"=========================================="<<endl<<endl;
        cout<<" Please Enter First-Number :  ";
        cin>>base_number;
        cout<<" Please Enter Second-Number :  ";
        cin>>power_number;
         power(base_number,power_number);
        cout<<"------------------------------------"<<endl;
        cout<<"Press => '1' to continue  "<<endl;
        cout<<"press => '0' to Stop"<<endl;
        cout<<"------------------------------------"<<endl;
        cin>>y_n;
        if(y_n==1){
            goto repeat;
        }
        else{
            cout<<"Sir thank you for checking my Questions"<<endl;
        }
        break;
        case 8:
        cout<<"=========================================="<<endl;
        cout<<"Given Equation is satisfied or not (a3+b3+c3=d3)"<<endl;
        cout<<"=========================================="<<endl<<endl;
        cout<<" Please Enter A-Number :  ";
        cin>>a;
        cout<<" Please Enter B-Number :  ";
        cin>>b;
        cout<<" Please Enter C-Number :  ";
        cin>>c;
        cout<<" Please Enter D-Number :  ";
        cin>>d;
        EQ(a,b,c,d);
        cout<<"------------------------------------"<<endl;
        cout<<"Press => '1' to continue  "<<endl;
        cout<<"press => '0' to Stop"<<endl;
        cout<<"------------------------------------"<<endl;
        cin>>y_n;
        if(y_n==1){
            goto repeat;
        }
        else{
            cout<<"Sir thank you for checking my Questions"<<endl;
        }
        break;
         case 9:
        cout<<"=========================================="<<endl;
        cout<<"Reverse of a given Number"<<endl;
        cout<<"=========================================="<<endl<<endl;
        cout<<" Please Enter Number :  ";
        cin>>reverse_number;
        reverse(reverse_number);
        cout<<"------------------------------------"<<endl;
        cout<<"Press => '1' to continue  "<<endl;
        cout<<"press => '0' to Stop"<<endl;
        cout<<"------------------------------------"<<endl;
        cin>>y_n;
        if(y_n==1){
            goto repeat;
        }
        else{
            cout<<"Sir thank you for checking my Questions"<<endl;
        }
        break;
         case 10:
        cout<<"=========================================="<<endl;
        cout<<"Given Number is a Prime Or not a prime-Number"<<endl;
        cout<<"=========================================="<<endl<<endl;
        cout<<" Please Enter Number :  ";
        cin>>prime_number;
        isprime(prime_number);
        cout<<"------------------------------------"<<endl;
        cout<<"Press => '1' to continue  "<<endl;
        cout<<"press => '0' to Stop"<<endl;
        cout<<"------------------------------------"<<endl;
        cin>>y_n;
        if(y_n==1){
            goto repeat;
        }
        else{
            cout<<"Sir thank you for checking my Questions"<<endl;
        }
        break;
        
         case 11:
        cout<<"=========================================="<<endl;
        cout<<"Find LCM of two given NUmbers"<<endl;
        cout<<"=========================================="<<endl<<endl;
        cout<<" Please Enter Number :  ";
        cin>>lcm_num1;
        cout<<" Please Enter Number :  ";
        cin>>lcm_num2;
        LCM(lcm_num1,lcm_num2);
        cout<<"------------------------------------"<<endl;
        cout<<"Press => '1' to continue  "<<endl;
        cout<<"press => '0' to Stop"<<endl;
        cout<<"------------------------------------"<<endl;
        cin>>y_n;
        if(y_n==1){
            goto repeat;
        }
        else{
            cout<<"Sir thank you for checking my Questions"<<endl;
        }
        break;
        case 12:
        cout<<"=========================================="<<endl;
        cout<<"1=> Rectangle"<<endl;
        cout<<"2=> Horizontal-Lines"<<endl;
        cout<<"3=> Vertical-Lines"<<endl;
        cout<<" Select One : ";
        cin>>y_n;
        cout<<"=========================================="<<endl<<endl;
        if(y_n==1){
             cout<<" Please Enter lenght of Rectangle :  ";
        cin>>lenght;
             cout<<" Please Enter width of Rectangle :  ";
        cin>>width;
         Rectangle(lenght,width);

        }
        else if(y_n==2){
            cout<<" Please Enter lenght e :  ";
        cin>>lenght;
        Draw_horizontal(lenght);

        }
        else if(y_n==3){
            cout<<" Please Enter height :  ";
        cin>>height;
        Draw_vertical(height);

        }
        else{
            cout<<"invlaid Entery"<<endl;
        }
       
        cout<<"------------------------------------"<<endl;
        cout<<"Press => '1' to continue  "<<endl;
        cout<<"press => '0' to Stop"<<endl;
        cout<<"------------------------------------"<<endl;
        cin>>y_n;
        if(y_n==1){
            goto repeat;
        }
        else{
            cout<<"Sir thank you for checking my Questions"<<endl;
        }
        break;
        case 13:
        cout<<"=========================================="<<endl;
        cout<<"Return smallest number among three integers"<<endl;
        cout<<"=========================================="<<endl<<endl;
        smallest(small_number);
        cout<<"------------------------------------"<<endl;
        cout<<"Press => '1' to continue  "<<endl;
        cout<<"press => '0' to Stop"<<endl;
        cout<<"------------------------------------"<<endl;
        cin>>y_n;
        if(y_n==1){
            goto repeat;
        }
        else{
            cout<<"Sir thank you for checking my Questions"<<endl;
        }
        break;
        case 14:
        cout<<"=========================================="<<endl;
        cout<<"five integers passes throught a function"<<endl;
        cout<<"=========================================="<<endl<<endl;
        even_odd(evenodd);
        cout<<"------------------------------------"<<endl;
        cout<<"Press => '1' to continue  "<<endl;
        cout<<"press => '0' to Stop"<<endl;
        cout<<"------------------------------------"<<endl;
        cin>>y_n;
        if(y_n==1){
            goto repeat;
        }
        else{
            cout<<"Sir thank you for checking my Questions"<<endl;
        }
        break;
        case 15:
        cout<<"Sorry Sir I was enable to crack this Question\n";
        break;
        case 16:
        cout<<"=========================================="<<endl;
        cout<<"Salary And Tax"<<endl;
        cout<<"=========================================="<<endl<<endl;
        cout<<" Please Enter salary Rs: ";
        cin>>salary;
          tax = calculateTax(salary);
    cout<<"Tax for the salary of Rs:" << salary << " is Rs:" << tax << endl;

        cout<<"------------------------------------"<<endl;
        cout<<"Press => '1' to continue  "<<endl;
        cout<<"press => '0' to Stop"<<endl;
        cout<<"------------------------------------"<<endl;
        cin>>y_n;
        if(y_n==1){
            goto repeat;
        }
        else{
            cout<<"Sir thank you for checking my Questions"<<endl;
        }
        break;
        
        case 17:
        cout<<"=========================================="<<endl;
        cout<<"Find Greatest Common Divisor"<<endl;
        cout<<"=========================================="<<endl<<endl;
        cout<<" Please Enter first-Number :  ";
        cin>>a;
        cout<<" Please Enter 2nd-Number :  ";
        cin>>b;
          gcd = findGCD(a,b);
    cout << "The GCD of " << a << " and " << b << " is: " << gcd << endl;

        cout<<"------------------------------------"<<endl;
        cout<<"Press => '1' to continue  "<<endl;
        cout<<"press => '0' to Stop"<<endl;
        cout<<"------------------------------------"<<endl;
        cin>>y_n;
        if(y_n==1){
            goto repeat;
        }
        else{
            cout<<"Sir thank you for checking my Questions"<<endl;
        }
        break;
        case 18:
        cout<< "Sorry sir this Question is too tough\n";
        break;
        case 20:
        cout<<"=========================================="<<endl;
        cout<<"count number of digits in inteer"<<endl;
        cout<<"=========================================="<<endl<<endl;
        cout<<" Please Enter Number :  ";
        cin>>a;
         numberOfDigits = countDigits(a);
    cout << "Number of digits in " << a << ": " << numberOfDigits <<endl;
        

        cout<<"------------------------------------"<<endl;
        cout<<"Press => '1' to continue  "<<endl;
        cout<<"press => '0' to Stop"<<endl;
        cout<<"------------------------------------"<<endl;
        cin>>y_n;
        if(y_n==1){
            goto repeat;
        }
        else{
            cout<<"Sir thank you for checking my Questions"<<endl;
        }
        break;
        case 21:
        cout<<"=========================================="<<endl;
        cout<<"Find Maximum Number in a given Array"<<endl;
        cout<<"=========================================="<<endl<<endl;
        cout<<" Please Enter size of array :  ";
        cin>>a;
        cout<<" Now enter elemnts of Array : ";
         input(a,a1);
           maxNumber = findMax(a1, a);
    cout << "The maximum number in the array is: " << maxNumber << endl;

        cout<<"------------------------------------"<<endl;
        cout<<"Press => '1' to continue  "<<endl;
        cout<<"press => '0' to Stop"<<endl;
        cout<<"------------------------------------"<<endl;
        cin>>y_n;
        if(y_n==1){
            goto repeat;
        }
        else{
            cout<<"Sir thank you for checking my Questions"<<endl;
        }
        break;
        case 22:
        case 23:
        cout<<"=========================================="<<endl;
        cout<<"find Prime Factors of given number"<<endl;
        cout<<"=========================================="<<endl<<endl;
        cout<<" Please Enter Number :  ";
        cin>>a;
            cout << "Prime factors of " << a << " are: ";
    displayPrimeFactors(a);
    cout << endl;

        cout<<"------------------------------------"<<endl;
        cout<<"Press => '1' to continue  "<<endl;
        cout<<"press => '0' to Stop"<<endl;
        cout<<"------------------------------------"<<endl;
        cin>>y_n;
        if(y_n==1){
            goto repeat;
        }
        else{
            cout<<"Sir thank you for checking my Questions"<<endl;
        }
        break;
        case 24:
        cout<<"=========================================="<<endl;
        cout<<"Print Pascal Triangle"<<endl;
        cout<<"=========================================="<<endl<<endl;
        cout<<" Please Enter row-Number :  ";
        cin>>a;
        pascal_triangle(a);
        cout<<"------------------------------------"<<endl;
        cout<<"Press => '1' to continue  "<<endl;
        cout<<"press => '0' to Stop"<<endl;
        cout<<"------------------------------------"<<endl;
        cin>>y_n;
        if(y_n==1){
            goto repeat;
        }
        else{
            cout<<"Sir thank you for checking my Questions"<<endl;
        }
        break;
        case 25:
        case 26:
        cout<<"=========================================="<<endl;
        cout<<"Find Minimmum Number in a given Array"<<endl;
        cout<<"=========================================="<<endl<<endl;
        cout<<" Please Enter size of array :  ";
        cin>>a;
        cout<<" Now enter elemnts of Array : ";
         input(a,a2);
           minNumber = findMin(a2, a);
    cout << "The maximum number in the array is: " << minNumber << endl;

        cout<<"------------------------------------"<<endl;
        cout<<"Press => '1' to continue  "<<endl;
        cout<<"press => '0' to Stop"<<endl;
        cout<<"------------------------------------"<<endl;
        cin>>y_n;
        if(y_n==1){
            goto repeat;
        }
        else{
            cout<<"Sir thank you for checking my Questions"<<endl;
        }
        break;
        


        
        
    }

    return 0;
}