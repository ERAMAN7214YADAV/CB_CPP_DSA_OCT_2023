#include<iostream>
#include<algorithm>
using namespace std;
int main () {
    int n;
    cout<<"Enter the length of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    int i;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    int k=0;
    int j=0;
    if(n==0||n==1)
    return n;
    sort(arr , arr+n);
    for(i=0 ; i<n ; i++){
    if(arr[i] != arr[i+1]){
        arr[j] = arr[i];
        j++;
        k++;
    }
    }

    cout<<"Size of new array is : "<<k<<endl;
    cout<<"New array is : ";
    for(i=0; i<j; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

