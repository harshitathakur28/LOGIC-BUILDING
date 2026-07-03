// to revese the words in a string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter any string: ";
    getline(cin,s);
    int end=s.length()-1;
    int j;
    string ans="";
    for(int j=s.length()-1;j>=0;j--){
        if(s[j]==' '){
            for(int k=j+1;k<=end;k++){
                ans+=s[k];
            }
            ans+=' ';
            end=j-1;
        }
    }
    for(int k=0;k<=end;k++){
        ans+=s[k];
    }
    cout<<"reversed string is: "<<ans;
    return 0;
}