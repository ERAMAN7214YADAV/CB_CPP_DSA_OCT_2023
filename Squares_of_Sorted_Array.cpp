#include<iostream>
#include<algorithm>
using namespace std;
    void sortSquares(int arr[] , int n){
        for(int i=0 ; i<n; i++){
        arr[i]=arr[i]*arr[i];
        }
    sort(arr , arr+n);
    }
    int main () {
    int n;
   cout<<"Enter the length of the array : ";
    cin>>n;
    int i;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
     cout << "Before sort " << endl; 
    for (int i = 0; i < n; i++){
     cout << arr[i] << " ";
    }
    sortSquares(arr, n);
    cout<<endl;
 
    cout << "After Sort " << endl;
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}