#include<iostream>
using namespace std;
int main() {
    int i, j;
    int arr[10][10];
    int m;
    cout<<"Enter the no. of rows : ";
    cin>>m;
    int n;
    cout<<"Enter the no. of column : ";
    cin>>n;
    cout<<"Enter the elements of the matrix : "<<endl;
    for(i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix : "<<endl;
    for( i=0; i<m; i++){
        for( j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int t;
    cout<<"Enter the value of target : ";
    cin>>t;
    bool found = false;
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(arr[i][j]==t){
            cout<<"found";
            break;
            }
        }
        if(!found){
        cout<<"not found";
        break;
    }
    }
    return 0;
}