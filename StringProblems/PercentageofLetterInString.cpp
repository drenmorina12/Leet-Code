// Percentage of Letter in String
#include <iostream>
#include <math.h>

using namespace std;

double percentageOfLetter(string s, char letter){

    double letterCount = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == letter)
            letterCount ++;
    }
    
    double x =  letterCount / s.size() * 100;
    return x;
}


int main(){
    string s = "foobar"; 
    char letter = 'o';

    int letterPercentage = percentageOfLetter(s, letter);
    cout << letterPercentage;

    return 0;
}