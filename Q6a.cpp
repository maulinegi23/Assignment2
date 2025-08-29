#include<iostream>
using namespace std;

struct Triple{
    int row,col,val;
};

int main(){
    int m,n,t;
    cout<<"Enter number of rows, columns and non-zero elements: ";
    cin>>m>>n>>t;

    Triple mat[100],trans[100];
    mat[0].row=m;
    mat[0].col=n;
    mat[0].val=t;

    cout<<"Enter row col value for non-zero elements:\n";
    for(int i=1;i<=t;i++)
        cin>>mat[i].row>>mat[i].col>>mat[i].val;

    trans[0].row=n;
    trans[0].col=m;
    trans[0].val=t;

    int k=1;
    for(int col=0;col<n;col++){
        for(int i=1;i<=t;i++){
            if(mat[i].col==col){
                trans[k].row=mat[i].col;
                trans[k].col=mat[i].row;
                trans[k].val=mat[i].val;
                k++;
            }
        }
    }

    cout<<"\nOriginal Sparse Matrix (triplet form):\n";
    for(int i=0;i<=t;i++)
        cout<<mat[i].row<<" "<<mat[i].col<<" "<<mat[i].val<<endl;

    cout<<"\nTranspose Sparse Matrix (triplet form):\n";
    for(int i=0;i<=t;i++)
        cout<<trans[i].row<<" "<<trans[i].col<<" "<<trans[i].val<<endl;

    return 0;
}
