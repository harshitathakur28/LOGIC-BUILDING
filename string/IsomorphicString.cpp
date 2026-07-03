#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<pair<char,char>>v;
    string s1;
    cout<<"enter any string: ";
    getline(cin,s1);
    string s2;
    cout<<"enter any string: ";
    getline(cin,s2);
    if(s1.length()!=s2.length()){
        cout<<"not isomorphic";
        return 0;
    }
    if(s1.length()==s2.length()){
        bool match=false;
        for(int i=0;i<s1.length();i++){
            for(int j=0;j<s2.length();j++){

                if(v[j].first==s1[i] && v[j].second!=s2[i]){
                    cout<<"not isomorphic";
                    return 0;
                    match=true;
                }
                if(v[j].second==s2[i] && v[j].first!=s1[i]){
                    cout<<"not isomorphic";
                    return 0;
                }
            
        }if(!match){
        v.push_back(make_pair(s1[i],s2[i]));
    }
    }   
    
    }
      cout<<"is isomorphic";  
}
