// to check if two strings are anagram or not

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1;
    cout<<"enter the Ist string: ";
    getline(cin,s1);
    string s2;
    cout<<"enter the IInd string: ";
    getline(cin,s2);
    bool isanagram=true;

    if(s1.length()!=s2.length()){
        isanagram=false;}
        else{
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                isanagram=false;
                break;
            }
        }
        
        }
    if(isanagram){
        cout<<"ANAGRAM";
    }
    else{
        cout<<"not a ANAGRAM";
    }
    return 0;
}