//to check the valid palindrome while ignoring spaces, commas, symbols and case
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter any string: ";
    getline(cin,s);
    int i=0;
    int j= s.length()-1;
  
    while(i<j){
        if(!((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ||(s[i]>='0' && s[i]<='9'))){
            i++;
            continue;
        }
        if(!((s[j]>='a' && s[j]<='z') || (s[j]>='A' && s[j]<='Z') ||(s[j]>='0' && s[j]<='9'))){
            j--;
            continue;
        }
         if(s[i] >= 'A' && s[i] <= 'Z'){
             s[i] += 32;}
        if(s[j] >= 'A' && s[j] <= 'Z'){
             s[j] += 32;}

            if(s[i]!=s[j]){
                cout<<"Not a palindrome";
                return 0;
            }
            if(s[i]==s[j]){
            i++;
            j--;
        } 
    }  
    cout<<"is a palindrome";
    return 0;
}