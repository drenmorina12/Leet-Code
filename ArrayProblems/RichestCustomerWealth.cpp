// Richest Customer Wealth
#include <iostream>
#include <vector>

using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int maxWealth = 0;
    int currentWealth;
    int i, j;
    for (i = 0; i < accounts.size(); i++){

        currentWealth = 0;
        for (j = 0; j < accounts[i].size(); j++){

            currentWealth += accounts[i][j];
        }
        if (currentWealth > maxWealth)
            maxWealth = currentWealth;
    }
    return maxWealth;
}

int main(){

    vector<vector<int>> accounts = {{1,2,3},{3,2,1}};

    int maxWealth = maximumWealth(accounts);

    cout << maxWealth;

    return 0;
}