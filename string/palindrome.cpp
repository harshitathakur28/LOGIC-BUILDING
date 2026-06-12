// to check palindrome 
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter any word: ";
    getline(cin,s);

    int i=0;
    int j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
        cout<<"Not a palindrome.";
        return 0;
        }
        if(s[i]==s[j]){
            i++;
            j--;
        }
        
    }
    cout<<"Is a palindrome.";
    return 0;

}