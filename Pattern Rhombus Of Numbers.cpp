#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a positive integer n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" "<<"\t";
        }
        int d=i;
        for(int j=1;j<=i;j++){
            cout<<d<<"\t";
        d++;
        }
        d=2*i-2;    //d=d-2;
        for(int j=1;j<=i-1;j++){
            cout<<d<<"\t";
            d--;
        }
        cout<<endl;
    }
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            cout<<" "<<"\t";
        }
        int d=n-i;
        for(int j=1;j<=n-i;j++){
            cout<<d<<"\t";
            d++;
        }
       d=2*(n-i)-2;    //d=d-2;
        for(int j=1;j<=n-i-1;j++){
            cout<<d<<"\t";
            d--;
        }
        cout<<endl;
    }
    return 0;
}
