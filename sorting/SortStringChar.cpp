#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int n=str.length();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(str[j]>str[j+1]){
                swap(str[j],str[j+1]);
            }
        }
    }
    cout<<"Sorted string: "<<str<<endl;
    return 0;
}