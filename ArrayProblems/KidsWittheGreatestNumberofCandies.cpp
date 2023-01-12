// Kids With the Greatest Number of Candies
#include <iostream>
#include <vector>
#include <algorithm> // per me perdor funksionin max_element

using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    
    vector <bool> maxCandies;
    int max = *max_element(candies.begin(), candies.end());

    for (int i = 0; i < candies.size(); i++){
        if(candies[i] + extraCandies >= max)
            maxCandies.push_back(true);
        else
            maxCandies.push_back(false);

    }
    return maxCandies;
}

int main(){
    vector <int> candies = {2,3,5,1,3};
    int extraCandies = 3;

    vector <bool> maxCandies = kidsWithCandies(candies, extraCandies);

    for (bool i: maxCandies){
        cout << i << ' ';
    }

    return 0;
}