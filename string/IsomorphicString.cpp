#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<pair<char, char>> v;

    string s1, s2;
    cout << "Enter first string: ";
    getline(cin, s1);

    cout << "Enter second string: ";
    getline(cin, s2);

    if (s1.length() != s2.length()) {
        cout << "Not Isomorphic";
        return 0;
    }

    for (int i = 0; i < s1.length(); i++) {

        bool match = false;

        for (int j = 0; j < v.size(); j++) {

            if (v[j].first == s1[i]) {
                if (v[j].second != s2[i]) {
                    cout << "Not Isomorphic";
                    return 0;
                }
                match = true;
            }

            if (v[j].second == s2[i] && v[j].first != s1[i]) {
                cout << "Not Isomorphic";
                return 0;
            }
        }

        if (!match) {
            v.push_back({s1[i], s2[i]});
        }
    }

    cout << "Is Isomorphic";
}