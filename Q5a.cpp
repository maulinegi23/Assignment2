//implementctive way to store two dimensional arrays (A) Diagonal Matrix
#include<iostream>
using namespace std;
int i,n;
int arr[100];
void create(){
    cout<<"enter the number of elements: ";
    cin>>n;
    cout<<"enter the diagonal elements of the array: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
}
void display() {
    cout << "Diagonal Matrix: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                cout << arr[i] << " ";  // Print diagonal elements
            } else {
                cout << "0 ";  // Non-diagonal elements are 0
            }
        }
        cout<<endl;
    }
}/*
void display(){
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
}
}*/
int main(){
    create();
    display();
    return 0;
}