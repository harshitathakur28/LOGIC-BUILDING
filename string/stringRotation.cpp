// tocheck if one string is rotation of another

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1;
    cout<<"enter any one string: ";
    getline(cin,s1);
    string s2;
    cout<<"enter any one string: ";
    getline(cin,s2);
    
    bool rotate=false;

    if(s1.length()==s2.length()){
        for(int i=0;i<=s1.length()-1;i++){
        char temp=s1[s1.length()-1];
        for(int j=s1.length()-1;j>0;j--){
            s1[j]=s1[j-1];
        }
        s1[0]=temp;
        
        if(s1==s2){
            rotate=true;
            break;
        }
        else{
            continue;
        }
    }
    }
    if(rotate){
        cout<<"s2 is the rotation of s1";
    }
    if(!rotate){
        cout<<"s2 is NOT the rotation of s1";
    }
    return 0;
}