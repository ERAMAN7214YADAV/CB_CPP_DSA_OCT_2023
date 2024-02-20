#include<iostream>
using namespace std;
int main () {
    int n;
   // cout<<"Enterthe length of the array : ";
    cin>>n;
    int arr[n];
   // cout<<"Enter the elements of the array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int low = -1;
    int mid = 0;
    int high = n;
    while(mid<high){
        if(arr[mid]==0){
            low++;
        swap(arr[low],arr[mid]);
        mid++;
        }
        else if(arr[mid]==1)
        mid++;
        else {
            high--;
            swap(arr[mid],arr[high]);
        }
    }
      //  cout<<"Output array is : "<<endl;
        for(int i=0; i<n; i++){
            cout<<arr[i]<<endl;
    }
    return 0;
}