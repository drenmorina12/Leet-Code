// Roman To Integer
#include <iostream>

using namespace std;

int romanToInt(string s) {

    int sum = 0;
    char characterCurrent = '\0', character;

    for (int i = 0; i < s.length(); i++){
        character = toupper(s[i]);
        
        if (character == 'I')
            sum += 1;
        else if (character == 'V'){
            if (characterCurrent == 'I')
                sum -= 2;
            sum += 5;
        }
        else if (character == 'X'){
            if (characterCurrent == 'I')
                sum -= 2;
            sum += 10;
        }   
        else if (character == 'L'){
            if (characterCurrent == 'X')
                sum -= 20;
            sum += 50;
        }
        else if (character == 'C'){
            if (characterCurrent == 'X')
                sum -= 20;
            sum += 100;
        }
        else if (character == 'D'){
            if (characterCurrent == 'C')
                sum -= 200;
            sum += 500;
        }
        else if (character == 'M'){
            if (characterCurrent == 'C')
                sum -= 200;
            sum += 1000;
        }
        characterCurrent = character;
    } 
return sum;
}

int main(){

    string s = "MCMXCIV";
    int converted = romanToInt(s);
    cout << converted;

    return 0;
}