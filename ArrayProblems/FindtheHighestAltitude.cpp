// Find the Highest Altitude
#include <iostream>
#include <vector>

using namespace std;

int largestAltitude(vector<int>& gain) {
    
    int res = 0;
    int altitude = 0;
    
    for (int s : gain) {
        altitude += s;
        res = max(res, altitude);
    }
    
    return res;

}

int main(){
    vector<int> gain = {-5,1,5,0,-7};

    int maxAltitude = largestAltitude(gain);
    cout << maxAltitude;

    return 0;
}