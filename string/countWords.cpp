//count words in a sentence

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter any word: ";
    getline(cin,s);
    int count=0;
    for(int i=0;i<s.length();i++){

        if((s[i] != ' ' && (i == 0 || s[i-1] == ' '))){
            count++;
        }
    }
    cout<<"no.of words in a sentence are: "<<count;

    return 0;
}