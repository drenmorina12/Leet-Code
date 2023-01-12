// Integer To Roman
#include <iostream>

using namespace std;

string intToRoman(int num) {
    
    string result = "";
    int thousands, hundreds, tens, ones;

    thousands = num / 1000;
    num -= thousands * 1000;

    hundreds = num / 100;
    num -= hundreds * 100;

    tens = num / 10;
    num -= tens * 10;

    ones = num;

    result += string(thousands, 'M');

    // C D
    if (hundreds < 5)
        if (hundreds == 4)
            result += "CD";
        else
            result += string(hundreds, 'C');
    else if (hundreds % 5 < 4){
        result += 'D';
        result += string(hundreds % 5, 'C');
    }
    else
        result += "CM";

    // X L

    if (tens < 5)
        if (tens == 4)
            result += "XL";
        else
            result += string(tens, 'X');
    else if (tens % 5 < 4){
        result += 'L';
        result += string(tens % 5, 'X');
    }
    else
        result += "XC";

    // I V
    if (ones < 5)
        if (ones == 4)
            result += "IV";
        else
            result += string(ones, 'I');
    else if (ones % 5 < 4){
        result += 'V';
        result += string(ones % 5, 'I');
    }
    else
        result += "IX";

    return result;
}

int main(){
    int num = 1994;
    string converted = intToRoman(num);
    cout << converted;

    return 0;
}
