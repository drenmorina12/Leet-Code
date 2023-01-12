// Number of Good Pairs
#include <iostream>
#include <vector>

using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    
    int i, j;
    int goodPairs = 0;
    int length = nums.size();

    for (i = 0; i < length - 1; i++){

        for (j = i+1; j < length; j++){

            if (nums[i] == nums[j])
                goodPairs ++;
        }
    }
    return goodPairs;
}

int main(){
    
    vector<int> nums = {1,2,3,1,1,3};
    int numberOfGoodPairs = numIdenticalPairs(nums);
    cout << numberOfGoodPairs;

    return 0;
}


