#include<iostream>
#include<algorithm>
using namespace std;
int main () {
    int n;
    cout<<"Enter the length of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
  //  sort(arr , arr+n);
    int t;
    cout<<"Enter the value of target : ";
    cin>>t;
    int s = 0;
    int e = n-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(t==arr[m]){
            cout<<m<<endl;
            break;
        }
        else{
            if(t>arr[m]){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
    }
    if(s>e){
        cout<<-1<<endl;
    }
 //   cout<<"Enter the value of target : ";
   // cin>>t;
   return 0;
    
}