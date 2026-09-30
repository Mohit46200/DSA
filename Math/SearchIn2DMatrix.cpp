 #include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

 
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=0;
        int c=matrix[0].size()-1;
        while(c>=0 && r<matrix.size()){
            if(target == matrix[r][c]){
                return true;
            }else if(target>matrix[r][c]){
                r++;
            }else{
                c--;
            }
        }
        return false;
    }