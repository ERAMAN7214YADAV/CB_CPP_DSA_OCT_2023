#include<iostream>
#include<algorithm>
using namespace std;
int main () {
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int i , j , k;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int t;
    cout<<"Enter the value of target : ";
    cin>>t;
    if(n<3){
        return 1;
    }
    sort(arr, arr+n);
    for (int i = 0; i < n - 2; i++) {
        // Skip duplicates of the first element
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
    }
    for(int i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            for(k=j+1; k<n; k++){
                if(arr[i]+arr[j]+arr[k]==t){
                    cout<<arr[i]<<","<<arr[j]<<" and "<<arr[k]<<endl;
                }
            }
        }
    }
return 0;

}