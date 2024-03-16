#include<iostream>
#include<string>
using namespace std;
 void printWords(string s){
      string word = "";
      for(int i=0; i<s.length(); i++){
         if(isupper(s[i])){
            if(word != ""){
               cout<<word<<endl;
            }
               word = "";
               word += s[i];
            }
      
            else {
               word += s[i];
            }
 }
            if(word != ""){
               cout<<word<<endl;
            }
 }
            int main () {
               string s;
               cin>>s;
               printWords(s);
   return 0;
}