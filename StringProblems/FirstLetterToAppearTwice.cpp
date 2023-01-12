// First Letter To Apper Twice
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

char repeatedCharacter(string s) {
    char c = '\0';
    
    unordered_set<char> h;

    for (int i = 0; i < s.length(); i++){
        c = s[i];

        if (h.find(c) != h.end())
            return c;

        else
            h.insert(c);

    }
    return '\0';
}

int main(){
    string s = "abccbaacz";
    char repeatedChars = repeatedCharacter(s);
    cout << repeatedChars; 

    return 0;
}