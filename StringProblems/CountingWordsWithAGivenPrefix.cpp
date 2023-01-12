// Counting Words With a Given Prefix
#include <iostream>
#include <vector>

using namespace std;

int wordsWithGivenPrefix (vector<string>& words, string pref){

    int count = 0;
    int prefLength = pref.length();

    for (auto i : words){
        if (i.substr(0, prefLength) == pref)
            count++;

    }
    return count;
}

int main(){
    vector<string> words = {"pay","attention","practice","attend"};
    string pref = "at";

    int numberOfMatches = wordsWithGivenPrefix(words, pref);
    cout << numberOfMatches;

    return 0;
}