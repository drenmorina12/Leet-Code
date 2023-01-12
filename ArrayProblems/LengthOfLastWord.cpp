// Length of Last Word
#include <iostream>

using namespace std;

int lengthOfLastWord(string s) {
    int length = 0;
    int tail = s.length() - 1;
    while (tail >= 0 && s[tail] == ' '){ 
        tail--;
    }
    while (tail >= 0 && s[tail] != ' ') {
        length++;
        tail--;
    }
    return length;
}

int main(){
    string s = "Hello World";

    int length = lengthOfLastWord(s);
    cout << length;

    return 0;
}