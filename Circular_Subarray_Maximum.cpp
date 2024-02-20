#include<iostream>
#include<climits>
using namespace std;
int main () {
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int i, j;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int s;
    int max=INT_MIN;
    while(i<j){
    for(i=0; i<n; i++){
        for(j=n-1; j>=0; j--){
        arr[s]=arr[i]+arr[j];
        }
    }
    }
    for(i=0; i<n; i++)
    cout<<arr[s]<<" ";
    return 0;
}