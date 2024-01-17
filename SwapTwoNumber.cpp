#include<iostream>
using namespace std;
int main () {
	int a,b;
	cout<<"Enter two number";
	cin>>a>>b; 
    int temp = a;
    a = b;
    b= temp;
    cout<<"After swaping numbers "<<a<<" "<<b;
	return 0;
}
