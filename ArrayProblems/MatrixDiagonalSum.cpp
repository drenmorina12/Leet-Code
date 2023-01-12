// Matrix Diagonal Sum
#include <iostream>
#include <vector>

using namespace std;

int diagonalSum(vector<vector<int>>& mat) {

    int n = mat.size();
    int middle = n / 2;
    int sum = 0;
    
    for( int i = 0 ; i < n ; i++ ){
        
        sum += mat[i][i];
        
        sum += mat[n-1-i][i];
    }
        
    if( n % 2 == 1 ){
        
        sum -= mat[middle][middle];
    }
    
    return sum;
}

int main(){

    vector<vector<int>> mat = {{1,2,3},
                               {4,5,6},
                               {7,8,9}};
    
    int sum = diagonalSum(mat);
    cout << sum;

    return 0;
}