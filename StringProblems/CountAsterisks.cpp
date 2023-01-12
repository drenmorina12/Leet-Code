// Count Asterisks
#include <iostream>

using namespace std;

int countAsterisks(string s){

    int asteriskNumber = 0;
    int length = s.length();
    bool pair = false;

    for (int i = 0; i < length; i++){

        if (s[i] == '*' && !pair)
            asteriskNumber ++;
        else if (s[i] == '|')
            pair = !pair;
    }
    return asteriskNumber;
}

int main(){
    string s = "l|*e*et|c**o|*de|";
    int asteriskNumber = countAsterisks(s);
    cout << asteriskNumber;

    return 0;
}