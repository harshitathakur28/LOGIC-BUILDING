#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"enter any word: ";
    getline(cin,s);
    vector<char>v;
    for(int i=0;i<s.length();i++){
        bool duplicate=false;
        for(int j=0;j<v.size();j++){
            if(s[i]==v[j]){
                duplicate=true;
                break;
            }
        }
        if(!duplicate){
            v.push_back(s[i]);
        }
    }
    cout<<"After removing duplicates:";
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    return 0;
}
