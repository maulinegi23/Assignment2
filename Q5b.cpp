//implement a way to store two dimensional arrays (A) tri Diagonal Matrix
#include<iostream>
using namespace std;
int i,j,n;
int main_arr[100],upper_arr[100],lower_arr[100];
void create(){
    cout<<"enter the number or rows/coloumns: ";
    cin>>n;
    cout<<"enter the elements of the main diagonal: ";
    for(i=0;i<n;i++){
        cin>>main_arr[i];
    }
    cout<<"enter the elements of upper diagonal: ";
    for(i=0;i<n-1;i++){
        cin>>upper_arr[i];
    }
    cout<<"enter the elements of the lower diagonal: ";
    for(i=0;i<n-1;i++){
        cin>>lower_arr[i];
    }
}
void display(){
    cout<<"the tridiagonal matrix is:\n ";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                cout<<main_arr[i]<<" ";
            }
            else if(i==j+1){
                cout<<upper_arr[i]<<" ";
            }
            else if(j==i+1){
                cout<<lower_arr[i]<<" ";
            }
            else
            cout<<0<<" ";
        }
    cout<<"\n";
    }
}
int main(){
    create();
    display();
    return 0;
}