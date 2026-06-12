// to find length without using length()

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter any word: ";
    getline(cin,s);
    
    int i=0;
    int count=0;
    while(s[i]!='\0'){
        count++;
        i++;
    }
    cout<<"length of string is: "<<count;
    return 0;
}