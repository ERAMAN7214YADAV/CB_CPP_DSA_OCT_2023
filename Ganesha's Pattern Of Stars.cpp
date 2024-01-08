#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter a positive integer n : ";
    cin>>n;
    //first part
    cout<<"*";
    for(int i=1;i<=(n-3)/2;i++){
        cout<<" ";
    }
    for(int i=1;i<=(n+1)/2;i++){
        cout<<"*";
    }
    cout<<endl;
    //second part
    for(int i=1;i<=(n-3)/2;i++){
        cout<<"*";
        for(int j=1;j<=(n-3)/2;j++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    //third part
    for(int i=1;i<=n;i++){
        cout<<"*";
    }
        cout<<endl;
    
    //fourth part
    for(int k=1;k<=(n-3)/2;k++){
    for(int i=1;i<=(n-3)/2+1;i++){
        cout<<" ";
    }
    cout<<"*";
    for(int i=1;i<=(n-3)/2;i++){
        cout<<" ";
    }
    cout<<"*"<<endl;
    }
    
    //fifth part
    for(int i=1;i<=(n+1)/2;i++){
        cout<<"*";
    }
    for(int i=1;i<=(n-3)/2;i++){
        cout<<" ";
    }
    cout<<"*";
    return 0;
}
