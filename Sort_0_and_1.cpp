#include<iostream>
using namespace std;
int main () {
    int n;
    int i, j;
    cout<<"Enter the length of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    int arr[n];
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
        for(i=0; i<n-1; i++){
            for(j=0; j<n-i-1; j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j], arr[j+1]);
                }
            }
        }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}