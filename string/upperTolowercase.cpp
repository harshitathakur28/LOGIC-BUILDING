//to convert upper case to lower case

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter any word: ";
    getline(cin,s);

    cout<<"uppercase: ";
    for(int i=0;i<s.length();i++){
        s[i]= tolower(s[i]);
        cout<<s[i];
    }
    return 0;
}