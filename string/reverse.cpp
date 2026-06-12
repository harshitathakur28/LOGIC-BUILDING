//reverse the string

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter any word: ";
    getline(cin,s);

    int i=0;
    int j=s.length()-1;
    cout<<"reversed string is: ";
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    cout<<s;
    
    return 0;
}