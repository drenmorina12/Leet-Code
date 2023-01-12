// Truncate Sentence
#include <iostream>

using namespace std;

string truncateSentance (string s, int k){

    int c = 0;

    for (int i = 0; i < s.size(); i++){

        if (s[i] == ' '){
            c++;
        }
        if (c == k){
            s.erase(s.begin()+i , s.end());
            return s;
        }
    }
    return s;

}


int main(){

    string s = "Hello how are you Contestant";
    int k = 4;

    string sentence = truncateSentance(s, k);
    cout << sentence;

    return 0;
}