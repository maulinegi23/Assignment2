#include<iostream>
using namespace std;

struct Triple {
    int row,col,val;
};

int main() {
    int m,n,t1,t2;
    cout<<"Enter rows and columns: ";
    cin>>m>>n;

    cout<<"Enter number of non-zero elements in Matrix A: ";
    cin>>t1;
    Triple A[100];
    A[0].row=m; A[0].col=n; A[0].val=t1;

    cout<<"Enter row col value for Matrix A:\n";
    for(int i=1;i<=t1;i++)
        cin>>A[i].row>>A[i].col>>A[i].val;

    cout<<"Enter number of non-zero elements in Matrix B: ";
    cin>>t2;
    Triple B[100];
    B[0].row=m; B[0].col=n; B[0].val=t2;

    cout<<"Enter row col value for Matrix B:\n";
    for(int i=1;i<=t2;i++)
        cin>>B[i].row>>B[i].col>>B[i].val;

    Triple C[200];
    int i=1,j=1,k=1;

    C[0].row=m; C[0].col=n;

    while(i<=t1 && j<=t2) {
        if(A[i].row==B[j].row && A[i].col==B[j].col) {
            C[k].row=A[i].row;
            C[k].col=A[i].col;
            C[k].val=A[i].val+B[j].val;
            i++; j++; k++;
        } 
        else if(A[i].row<B[j].row || (A[i].row==B[j].row && A[i].col<B[j].col)) {
            C[k]=A[i];
            i++; k++;
        } 
        else {
            C[k]=B[j];
            j++; k++;
        }
    }
    while(i<=t1) { C[k]=A[i]; i++; k++; }
    while(j<=t2) { C[k]=B[j]; j++; k++; }

    C[0].val=k-1;

    cout<<"\nMatrix A (triplet form):\n";
    for(int p=0;p<=t1;p++)
        cout<<A[p].row<<" "<<A[p].col<<" "<<A[p].val<<endl;

    cout<<"\nMatrix B (triplet form):\n";
    for(int p=0;p<=t2;p++)
        cout<<B[p].row<<" "<<B[p].col<<" "<<B[p].val<<endl;

    cout<<"\nSum Matrix C (triplet form):\n";
    for(int p=0;p<=C[0].val;p++)
        cout<<C[p].row<<" "<<C[p].col<<" "<<C[p].val<<endl;

    return 0;
}
