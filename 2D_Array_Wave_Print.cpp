#include<iostream>
using namespace std;
void Waveprint(int mat[][10], int m, int n){
    for(int j=0; j<n; j++){
        if(j%2==0){
            for(int i=0; i<m; i++){
                cout<<mat[i][j]<<" ";
            }
        }
        else{
            for(int i=m-1; i>=0; i--){
                cout<<mat[i][j]<<" ";
            }
        }
    }
}
int main () {
   int m;
   cout<<"Enter the number of rows : "<<endl;
   cin>>m;
   int n;
   cout<<"Enter the number of column : "<<endl;
   cin>>n;
   cout<<"Enter the elements of matrix : "<<endl;
   int mat[10][10];
   for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cin>>mat[i][j];
    }
   }
    cout<<"RESULT : "<<endl;
   Waveprint(mat, m, n);
    return 0;
}