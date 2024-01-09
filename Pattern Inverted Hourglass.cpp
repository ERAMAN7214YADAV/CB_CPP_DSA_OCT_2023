#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a positive integer n : ";
    cin>>n;
    for(int i=1; i<=n+1; i++){
      int d=n;
        for(int j=1; j<=i; j++){
            cout<<d<<"\t";
         d--;
        }
        for(int j=1; j<=2*(n-i)+1; j++){
            cout<<" "<<"\t";
        }
        for(int j=n-i+1; j<=n; j++){
            if(j!=0)
            cout<<j<<"\t";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
       int d=n;
        for(int j=1; j<=n+1-i; j++){
        cout<<d<<"\t";
        d--;
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<" "<<"\t";
        }
        d=i;
        for(int j=1; j<=n+1-i; j++){
            cout<<j<<"\t";
           d++;
        }
        cout<<endl;
    }
    return 0;
}
