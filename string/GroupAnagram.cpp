#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {

    cout << "Enter words in one line: ";

    string line;
    getline(cin, line);

    vector<string> words;

    stringstream ss(line);

    string word;

    while(ss >> word)
    {
        words.push_back(word);
    }

    vector<pair<string,string>> v;

    for(int i=0;i<words.size();i++)
    {
        string temp = words[i];

        sort(temp.begin(), temp.end());

        v.push_back({temp, words[i]});
    }

    sort(v.begin(), v.end());

  

    for(int i=0;i<v.size();)
    {
        cout << "  [";

        string key = v[i].first;

        while(i<v.size() && v[i].first==key)
        {
            cout << " " << v[i].second << " ";

            if(i+1<v.size() && v[i+1].first==key)
                cout << ", ";

            i++;
        }

        cout << "]";

        if(i<v.size())
            cout << ",";

        cout << endl;
    }

  

    return 0;
}