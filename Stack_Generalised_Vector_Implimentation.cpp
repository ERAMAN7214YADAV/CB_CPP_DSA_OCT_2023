#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class stack {
    vector<T>v;
public :
    void push(T val) {
    v.push_back(val);
    } 
    void pop () {
        if(empty()){
        return;
    }
    v.pop_back();
    }
    int size() {
        return v.size();
    }
    T top() {
        return v.back();
    }
    bool empty(){
        return v.empty();
    }
    };
    template<typename T>
    void printStack(stack<T> s){
        while(!s.empty){
            cout<<s.top()<<" ";
            s.pop();
        }
        cout<<endl;
    }
    int main() {
        stack<string> s;
        cout<<"size : "<<s.size()<<endl;
        cout<<"isempty ? "<<s.empty()<<endl;
    }












    
