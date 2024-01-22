#include<iostream>
using namespace std;
void Reverse_Array(int arr[], int i, int j){

while(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
}
}
void Print_Array(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Original array is"<<endl;
    Print_Array(arr, n);
    cout<<endl;
    Reverse_Array(arr, 0, n-1);
    cout<<"Reversed array is"<<endl;
    Print_Array(arr, n);
    return 0;

}
