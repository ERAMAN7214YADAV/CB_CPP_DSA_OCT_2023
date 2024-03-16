#include<iostream>
using namespace std;
int main () {
    int m;
    cout<<"Enter the no. of rows : ";
    cin>>m;
    int n;
    cout<<"Enter the no. of column : ";
    cin>>n;
    cout<<"Enter the elements of the matrix : "<<endl;
    int sr = 0;
    int sc = 0;
    int er = m-1;
    int ec = n-1;
    int arr[10][10];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix : "<<endl;
    for(int i=0; i<m; i++){
        for( int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    while(sr<=er and sc<=ec){
        for(int i=sc; i<=ec; i++){
            cout<<arr[sr][i]<<" ";
        }
        sr++;
        for(int j=sr; j<=er; j++){
            cout<<arr[ec][j]<<" ";
        }
        ec--;
        for(int k=ec; k>=sc; k--){
            cout<<arr[er][k]<<" ";
        }
        er--;
        for(int l=er; l>=sr; l--){
            cout<<arr[sc][l]<<" ";
        }
        sc++;
    }
    return 0;
}