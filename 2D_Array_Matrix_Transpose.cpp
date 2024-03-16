#include<iostream>
using namespace std;
void Transpose(int mat[][10], int n){
   for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        swap(mat[i][j] , mat[j][i]);
    }
   }
}   
int main () {
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    cout<<"Enter the elements of the matrix : "<<endl;
    int mat[10][10];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    Transpose(mat , n);
    
    cout<<"Matrix after transpose : "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}