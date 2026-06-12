// to count Digits, Alphabets and Special Characters

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter any word: ";
    getline(cin,s);
    
    int alphabet=0;
    int digit=0;
    int special=0;
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ){
            alphabet++;
        }
        else if(s[i]>= '0' && s[i]<='9'){
            digit++;
        }
        else if(s[i]==' '){

        }
        else{
            special++;
        }
    }
    cout<<"Aplabet: "<<alphabet<<endl;
    cout<<"Digits: "<<digit<<endl;
    cout<<"Special character"<<special<<endl;

    return 0;
}