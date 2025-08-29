//lower triangle matrix
#include <iostream>
using namespace std;
int arr[100],i,j,n,n2,a;
void create(){
    cout<<"enter the number of rows/coloumns: ";
    cin>>n;
    cout<<"enter the non zero elements of the matrix (row wise):\n";
    n2 = (n*(n+1))/2;
    for(i=0;i<n2;i++){
        cin>>arr[i];
    }
}
void display(){
    cout<<"the matrix is: \n";
    a=0;
    n2 = (n*(n+1))/2;
    for(i=0;i<n;i++){
        for (j=0;j<n;j++){
            if(i<=j){
                cout<<arr[a]<<" ";
                a++;
            }
            else{
               cout<<0<<" ";
            }
        }
      cout<<endl;  
    }
}
int main(){
    create();
    display();
    return 0;
}