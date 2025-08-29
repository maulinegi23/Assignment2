// Symmetric Matrix Efficient Storage
#include<iostream>
using namespace std;

int arr[100],i,n2,n,j,a;

int getIndex(int i, int j) {
    if(i<=j) 
        return(i*n-(i*(i-1))/2+(j-i));
    else
        return(j*n-(j*(j-1))/2+(i-j));
}

void create(){
    cout<<"Enter the number of rows/columns: ";
    cin>>n;

    n2=(n*(n+1))/2;

    cout<<"Enter the elements of the matrix (upper triangle row-wise): \n";
    for(i=0;i<n2;i++){
        cin>>arr[i];
    }
}

void display(){
    cout<<"The symmetric matrix is: \n";
    for(i=0;i<n;i++){
        for(j=0; j<n;j++){
            cout<<arr[getIndex(i, j)]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    create();
    display();
    return 0;
}
