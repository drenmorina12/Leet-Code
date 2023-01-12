// Check if the Sentence Is Pangram
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool checkIfPangram(string sentence){
    set<int> s;

    for (int i = 0; i < sentence.length(); i++){

        if (s.find(sentence[i]) == s.end())
        // If letter isn't in set s, add it
            s.insert(sentence[i]);
    }
    return s.size() == 26;
    
}

int main(){
    string sentence = "thequickbrownfoxjumpsoverthelazydog";
    bool isPangram = checkIfPangram(sentence);
    cout << isPangram;

    return 0;
}

/*  CHECK LATER

    bool checkIfPangram(string sentence) {
        set<int> s;
        for (auto& c: sentence)
            s.insert(c);
        return s.size() == 26;

*/ 