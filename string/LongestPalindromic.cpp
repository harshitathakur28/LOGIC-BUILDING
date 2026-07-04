//to find the longest palindromic substring in a given string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter any string: ";
    getline(cin,s);
    string ans = "";
   for(int i = 0; i < s.length(); i++)
{
    // Odd palindrome
    int left = i;
    int right = i;

    while(left >= 0 && right < s.length() && s[left] == s[right])
    {
        left--;
        right++;
    }
    string temp = "";
        for (int k = left + 1; k < right; k++) {
            temp += s[k];
        }

        if (temp.length() > ans.length()) {
            ans = temp;
        }

    // Even palindrome
    left = i;
    right = i + 1;


    while(left >= 0 && right < s.length() && s[left] == s[right])
    {
        left--;
        right++;
    }
    temp = "";
        for (int k = left + 1; k < right; k++) {
            temp += s[k];
        }

        if (temp.length() > ans.length()) {
            ans = temp;
        }
}
cout<<"Longest palindromic substring is: "<<ans;
return 0;
}
