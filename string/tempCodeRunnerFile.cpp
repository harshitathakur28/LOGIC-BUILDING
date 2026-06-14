#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of strings: ";
    cin>>n;
    string s[n];
    cout<<"enter the strings: ";
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s,s+n);