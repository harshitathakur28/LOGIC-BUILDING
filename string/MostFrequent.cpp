//to find the most frequent character   
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter any word: ";
    getline(cin,s);
    int max=0;
    char ans;
    for(int i=0;i<=s.length()-1;i++){
        int count=0;
        for(int j=0;j<=s.length()-1;j++){
            if(s[i]==s[j]){
                count++;
            }
        }
        if(count>max){
            max=count;
            ans=s[i];
        }
    }
    cout<<ans;
    return 0;
}
