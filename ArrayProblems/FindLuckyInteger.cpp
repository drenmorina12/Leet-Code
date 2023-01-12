// Find Lucky Integer
#include <iostream>
#include <vector>

using namespace std;

int findLucky(vector<int>& arr) {
    int luckyInt = 0;
    int numberCounter;
    int i, j;

    for (i = 0; i < arr.size(); i++){
        numberCounter = 0;
        for (j = 0; j < arr.size(); j++){

            if (arr[i] == arr[j])
                numberCounter += 1;
        }
        if (arr[i] == numberCounter && numberCounter > luckyInt)
            luckyInt = numberCounter;
    }

    if (luckyInt == 0)
        return -1;
    return luckyInt;
}

int main(){

    vector<int> arr = {2,2,2,3,3};
    int luckyInteger = findLucky(arr);
    cout << luckyInteger;
    
    return 0;
}