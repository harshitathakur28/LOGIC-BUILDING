//to convert lower case to upper case

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter any word: ";
    getline(cin,s);

    cout<<"uppercase: ";
    for(int i=0;i<s.length();i++){
        s[i]= toupper(s[i]);
        cout<<s[i];
    }
    return 0;
}