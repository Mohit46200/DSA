 #include <iostream> 
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

 //time --> O(N!)
 
 bool check(vector<string>& temp,int n, int a,int i){
        // Check column above
        for (int j = 0; j < a; j++) {
            if (temp[j][i] == 'Q') {
                return false;
            }
        }

        // Upper-left diagonal
        for (int j = a - 1, k = i - 1;j >= 0 && k >= 0; j--, k--) {
            if (temp[j][k] == 'Q') {
                return false;
            }
        }

        // Upper-right diagonal
        for (int j = a - 1, k = i + 1;j >= 0 && k < n; j--, k++) {
            if (temp[j][k] == 'Q') {
                return false;
            }
        }

        return true;
    }
    void solve(vector<vector<string>>& ans,vector<string>& temp,int n,int a){
        if(a==n){
            vector<string> board = temp;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (board[i][j] == '0') {
                        board[i][j] = '.';
                    }
                }
            }
            ans.push_back(board);
            return;
        }
            for(int i=0;i<n;i++){
                if(temp[a][i]=='0' && check(temp,n,a,i)){
                    temp[a][i] = 'Q';
                    solve(ans,temp,n,a+1);
                    temp[a][i] = '0';
                }
                
            }
            return;
        
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> temp(n,string(n,'0'));
        int a=0;
        solve(ans,temp,n,a);
        return ans;
    }