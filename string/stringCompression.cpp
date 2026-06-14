#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter any word: ";
    getline(cin,s);
    
    int count=1;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            count++;
        }
        else{
            cout<<s[i]<<count;
            count=1;
        } 
    }
    cout<<s[s.length()-1]<<count;
    return 0;
}