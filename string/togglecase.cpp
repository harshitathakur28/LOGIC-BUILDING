//toggle case

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter any word: ";
    getline(cin,s);
    for(int i=0;i<s.length();i++){
    if(islower(s[i])){
        s[i]=toupper(s[i]);
        
    }
    else if(isupper(s[i])){
        s[i]=tolower(s[i]);
        
    }
}
cout<<"after toggle: "<<s;
    return 0;
}