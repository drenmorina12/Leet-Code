// Replace All Digits With Characters
#include <iostream>

using namespace std;

    string replaceDigits(string s) {
        for(int i=1; i<s.size(); i+=2){
            s[i]=s[i-1]+(s[i]-'0');
        } //S'1'= 'a'(97)+ 1(49) - 0(48) = (1)
        return s;
    }


int main(){

    string s = "a1c1e1";
    cout << replaceDigits(s);

    return 0;
}