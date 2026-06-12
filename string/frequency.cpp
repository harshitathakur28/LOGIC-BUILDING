// to check frequency of each character

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cout<<"enter any word: ";
    getline(cin,s);
    
    sort(s.begin(),s.end());
    int count=1;
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]){
            count++;
        }
        if(s[i]!=s[i+1]){
            cout<<s[i]<<" occurs "<<count<<" times"<<endl;
            count=1;
        }
    }
    
    
    return 0;
}