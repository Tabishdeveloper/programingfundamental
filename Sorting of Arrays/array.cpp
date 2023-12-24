#include<iostream>
#include<string>
using namespace std;
int main(){

/*int n,m;
cout<<"Enter the rows : ";
cin>>n;
cout<<"Enter the columns :";
cin>>m;
    int a1[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a1[i][j];
        }
    }
    cout<<"The given Matrix is here : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a1[i][j]<<" ";
        }
        cout<<endl;
    }
    int x;
    cout<<"Enter seraching element : ";
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a1[i][j]==x){
                cout<<"Row : "<<i<<endl<<"column : "<<j<<endl;
                flag= true;
            }
        }
    }
    if(flag){
        cout<<"Elment is found\n";
    }
    else{
        cout<<"Elment not found\n";
    }
  
  */
 
    /*
int n,m;

cout<<"================================\n";
cout<<" For First Matrix\n";
cout<<"================================\n";
cout<<"Enter the rows of first matrix : ";
cin>>n;
cout<<"Enter the Columns of First martix : ";
cin>>m;
int a1[n][m];
cout<<"Enter the elments of First matix: ";
for(int i =0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a1[i][j];
    }
}
display(a1);
cout<< "First matrix \n";
for(int i =0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<a1[i][j]<<" ";
    }
    cout<<endl;
}

int a,b;

cout<<"\n================================\n";
cout<<" For second Matrix\n";
cout<<"================================\n";
cout<<"Enter the rows of second matrix : ";
cin>>a;
cout<<"Enter the Columns of second martix : ";

cin>>b;
int a2[a][b];
cout<<"Enter the elments of seocond matix: ";
for(int i =0;i<a;i++){
    for(int j=0;j<b;j++){
        cin>>a2[i][j];
    }
    cout<<endl;
}
cout<< "Second matrix \n";
for(int i =0;i<a;i++){
    for(int j=0;j<b;j++){
        cout<<a2[i][j]<< " ";
    }
    cout<<endl;
}
if(m==a){
int pro[n][b];

for (int i = 0; i < n; i++) {
            for (int j = 0; j < b; j++) {
                pro[i][j] = 0;

                for (int k = 0; k < m; k++){
                    pro[i][j] += a1[i][k] * a2[k][j];
                }
            }
        }

        cout << "\n\nThe Product matrix is : \n";

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < b; j++) {
                cout << pro[i][j] << "  ";
            }
            cout << endl;
        }  
}
else{
    cout<<"Invalid Entery\n";
}
*/

/*int n;
cout<<"Enter the No.of Elments : ";
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];

}
cout<<"Sorted array is here\n";

for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(a[j]<a[i]){
            int temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }
    }
}
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
*/
int sum =0;
for(int i=5;i>0;i--){
    sum+=i;

}
cout<< "The sum is : "<<sum;



        return 0 ;

}


