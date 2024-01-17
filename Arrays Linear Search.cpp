#include<iostream>
using namespace std;
int main () {
	int n;
	cout<<"Enter a positive integer n : ";
	cin>>n; 
	int arr[n];
	int i;

	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	int m;
	cout<<"Enter the value of m : ";
	cin>>m;
	for(i=0; i<n; i++){
		if(arr[i]==m){
			cout<<i<<endl;
			break;
		}
	}
	if(arr[i]==n){
		cout<<"-1"<<endl;
	}
	return 0;
}
