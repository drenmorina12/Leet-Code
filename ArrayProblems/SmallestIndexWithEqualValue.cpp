// Smallest Index With Equal Value
#include <iostream>
#include <vector>

using namespace std;

int smallestEqual(vector<int>& nums){
    for (int i = 0; i < nums.size(); i++){
        if (i % 10 == nums[i])
            return i;
    }

    return -1;
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9,0};

    int smallestIndex = smallestEqual(nums);
    cout << smallestIndex;

    return 0;
}