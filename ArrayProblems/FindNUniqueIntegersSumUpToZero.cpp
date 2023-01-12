// Find N Unique Integers Sum up to Zero
#include <iostream>
#include <vector>

using namespace std;

vector<int> sumZero(int n) {
    
    vector<int> M(n);
    for (int i = 0; i < n; i++)
        M[i] = i * 2 - n + 1; // kjo formul e gjen nje numer negativ dhe pozitiv, qe kur mblidhen japin 0
    return M;
}

int main(){

    int n = 9;
    vector<int> array = sumZero(n);
    for (int i = 0; i < n; i++){
        cout << array[i] << ' ';
    }
    
    return 0;
}